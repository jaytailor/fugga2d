using System.Collections;
using System.Collections.Generic;
using DeltaDNA;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DestroyBall : MonoBehaviour {

    public Animator anim = null;
	public spawnGoodies sg;
	public BackToMenu bm;
	public ChanceRemainMenu crm;
	public FuggaWin fw;
	public UnityAds ads;
	public Time tm;
	private AudioSource ASource;
	public AudioClip AClip;

	//Time 
	public int time;
	private bool mGameOver = false;

	private Mediation mediation = null;

	void Start()
	{		
		Debug.Log("DestroyBall.Start");
		InvokeRepeating ("Count", 0.0f, 1.0f);

		if (Manager.DifficultyLevel == 0) {
			time = 75;
		}
		if (Manager.DifficultyLevel == 1) {
			time = 60;
		}
		if (Manager.DifficultyLevel == 2) {
			time = 50;
		}
		if (Manager.DifficultyLevel == 3) {
			time = 40;
		}

		if (ASource == null) {
			ASource = gameObject.AddComponent<AudioSource>();
		}

        if(anim == null){
            anim = gameObject.GetComponent<Animator>();
        }

		var go = GameObject.Find("Mediation");
		if (go != null)
		{
			mediation = go.GetComponent<Mediation>();
			mediation.LoadInterstital();
		} else {
			Debug.LogError("Mediation not found");
		}
	}


	private bool sendDDNAEvent = true;

	void Update()
	{
		if (mGameOver == true || LifeValue.lifeValue == 0) {

			// Disable the screen behind. Don't show any object
			GameObject obj = GameObject.Find ("Goodies");
			obj.SetActive (false);

			//ads.ShowPromo ();
			bm.showBackMenu ();
		}

		// If 60 balloons are popped then you win the game
		if (Score.scoreValue == 60) {

			fw.showWinningScreen ();
			PlayerTime.timeValue = "";
		}

		//this if check for the mouse left click
		if (Input.GetMouseButtonDown (0)) 
		{
            killObjectAndRestart ();

			GameObject bmb = GameObject.Find ("BombLitSprite");

			// remove the bomb and call isObjectExs to reset
			if (bmb != null) {
				bmb.SetActive (false);
				sg.isObjectExs();
			}

		}
	}

	void killObjectAndRestart(){
		
		RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);

		if (hit.collider != null && hit.collider.gameObject == gameObject) {
           	if (hit.collider.gameObject.name == "BombLitSprite") {
                LifeValue.lifeValue -= 1;

				if (sendDDNAEvent && LifeValue.lifeValue == 2 && Manager.PremiumScore < 200)
				{
					Debug.LogFormat("Life value 2 and premium count less than 200: ({0}, {1}, {2})", sendDDNAEvent, LifeValue.lifeValue, Manager.PremiumScore);
					sendDDNAEvent = false;
					DDNA.Instance.RecordEvent(new GameEvent("playerState").
							AddParam("premium", Manager.PremiumScore).
							AddParam("livesRemaining", 2)).Run();
				}

                StartCoroutine(PopBomb(hit));

                if (LifeValue.lifeValue == 0)
                {
                    mGameOver = true;
                }
                else
                {
                    crm.showChanceRemainScreen();
                }
             } 
			else {                
                StartCoroutine(PlayAndDestroy(hit));
				Score.scoreValue += 1;
                Manager.PremiumScore += 1;
			}
		}
	}

    IEnumerator PopBomb(RaycastHit2D hit)
    {
        Debug.Log("bomb is popping");
		mediation.handler.Show();

        anim.SetTrigger("blast");
        Debug.Log(anim.name);
        yield return new WaitForSeconds(0.5f);
        hit.collider.gameObject.SetActive(false);
        sg.isObjectExs();
    }

    IEnumerator PlayAndDestroy(RaycastHit2D hit){
        ASource.PlayOneShot(AClip);
        anim.SetTrigger("pop");
        yield return new WaitForSeconds(AClip.length);
        hit.collider.gameObject.SetActive(false);
        sg.isObjectExs();
    }
		
	void Count(){
		if (time == 0) {
			CancelInvoke ("Count");
		} else {
			time--;
		}
	}

	void OnGUI() {
		int minutes = Mathf.FloorToInt(time / 60F);
		int seconds = Mathf.FloorToInt(time - minutes * 60);
		string niceTime = string.Format("{0:00}:{1:00}", minutes, seconds);

		if (niceTime == "00:00" && Score.scoreValue <= 60) {
			mGameOver = true;
		}

		PlayerTime.timeValue = niceTime.ToString ();
	}

	public int Time(){
		return time; 
	}

}
