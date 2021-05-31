using System;
using System.Text;
using Newtonsoft.Json;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;
using System.Collections.Generic;

namespace Unity.Mediation.Dashboard.Editor
{
    public static class JwtToken
    {
        static readonly Uri k_TokenExchangeUri = new Uri("https://services.unity.com/api/auth/v1/genesis-token-exchange/unity");

        const string k_errorRetrievingToken = "An error occured while attempting to retrieve a token to communicate with the Dashboard; ";
        const string k_errorInvalidToken    = "An error occured while attempting to retrieve a token to communicate with the Dashboard, the response format was unexpected; ";

        public static string Token { get; private set; }
        public static DateTime ExpireTime { get; private set; }

        public static void GetTokenAsync(Action<string> onTokenObtained)
        {
            //Todo: figure out why the token must be refreshed in some cases. For now always refresh.
            Token = null;

            if (!string.IsNullOrEmpty(Token))
            {
                if (DateTime.Now > ExpireTime)
                {
                    //Token is expired, Refresh it.
                    CloudProjectSettings.RefreshAccessToken(_ => RetrieveTokenAsync(onTokenObtained));
                }
                else
                {
                    //We have a valid token, use it.
                    onTokenObtained?.Invoke(Token);
                }
            }
            else
            {
                //We need to Retrieve a token from the backend
                RetrieveTokenAsync(onTokenObtained);
            }
        }

        static void RetrieveTokenAsync(Action<string> onTokenRetrieved)
        {
            var request = new UnityWebRequest(k_TokenExchangeUri, UnityWebRequest.kHttpVerbPOST);
            byte[] bodyRaw = Encoding.UTF8.GetBytes("{\"token\": \"" + CloudProjectSettings.accessToken + "\"}");

            request.uploadHandler   = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");

            var requestAsyncOp = request.SendWebRequest();
            requestAsyncOp.completed += _ =>
            {
                if (request.isNetworkError || request.isHttpError)
                {
                    Debug.LogWarning(k_errorRetrievingToken + request.error);
                    onTokenRetrieved(null);
                    return;
                }

                var tokenWrapper = JsonConvert.DeserializeObject<JwtTokenWrapper>(request.downloadHandler.text);
                if (string.IsNullOrEmpty(tokenWrapper.JwtToken))
                {
                    Debug.LogWarning(k_errorInvalidToken + request.downloadHandler.text);
                    onTokenRetrieved(null);
                    return;
                }

                Token = tokenWrapper.JwtToken;
                ParseTTL(Token);
                onTokenRetrieved(Token);
            };
        }

        static void ParseTTL(string jwt)
        {
            string[] jwtArray = jwt.Split('.');
            var jwtString = jwtArray[1];

            string jsonString = jwtString.FromBase64Safely();
            var header = JsonConvert.DeserializeObject<JwtHeader>(jsonString);
            ExpireTime = DateTime.Now.AddSeconds(header.ExpiresAtTime - header.IssuedAtTime);
        }

        public static string FromBase64Safely(this String str)
        {
            while (str.Length % 4 != 0)
                str += "=";

            return Encoding.UTF8.GetString(Convert.FromBase64String(str));
        }

        class JwtTokenWrapper
        {
            [JsonProperty("token")]
            public string JwtToken { get; protected set; }
        }

        class JwtHeader
        {
            [JsonProperty("iat")]
            public int IssuedAtTime { get; protected set; }

            [JsonProperty("exp")]
            public int ExpiresAtTime { get; protected set; }
        }
    }
}
