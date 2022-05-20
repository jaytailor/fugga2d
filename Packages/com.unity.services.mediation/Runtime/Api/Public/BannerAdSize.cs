using UnityEngine;

namespace Unity.Services.Mediation
{
    /// <summary>
    /// Specifies a size for a Banner Ad.
    /// </summary>
    public class BannerAdSize
    {
        const float k_DpiPerDp = 160f;
#if UNITY_EDITOR
        //This value is approximative, for use in mock banners only
        internal static readonly float k_DpToPixelRatio = 2.5f * Screen.width / 1080f;
#else
        internal static readonly float k_DpToPixelRatio = Screen.dpi / k_DpiPerDp;
#endif

        /// <summary>
        /// Retrieves the Width of this Banner Size in pixels.
        /// </summary>
        public int Width => m_Value.x;

        /// <summary>
        /// Retrieves the Height of this Banner Size in pixels.
        /// </summary>
        public int Height => m_Value.y;

        /// <summary>
        /// Retrieves the Width of this Banner Size in dp.
        /// </summary>
        public int DpWidth => (int)(m_Value.x / k_DpToPixelRatio);

        /// <summary>
        /// Retrieves the Height of this Banner Size in dp.
        /// </summary>
        public int DpHeight => (int)(m_Value.y / k_DpToPixelRatio);

        readonly Vector2Int m_Value;

        /// <summary>
        /// Constructs a Banner Size in pixel format
        /// </summary>
        /// <param name="width">Width of Banner in pixels</param>
        /// <param name="height">Height of Banner in pixels</param>
        public BannerAdSize(int width, int height) : this(new Vector2Int(width, height))
        {
        }

        /// <summary>
        /// Constructs a Banner Size from a Vector2Int in pixel format
        /// </summary>
        /// <param name="size">size in a <see cref="Vector2Int"/> pixels form</param>
        public BannerAdSize(Vector2Int size)
        {
            m_Value = size;
        }

        /// <summary>
        /// Constructs a Banner Size from a Vector2 in pixel format
        /// </summary>
        /// <param name="size">size in a <see cref="Vector2"/> pixels form</param>
        public BannerAdSize(Vector2 size)
        {
            m_Value = new Vector2Int((int)size.x, (int)size.y);
        }

        /// <summary>
        /// Constructs a Banner Size from a predefined size
        /// </summary>
        /// <param name="size">size in a <see cref="BannerAdPredefinedSize"/> form</param>
        public BannerAdSize(BannerAdPredefinedSize size)
        {
            m_Value = size.ToBannerAdSize();
        }

        /// <summary>
        /// Constructs a Banner Size from dp units
        /// </summary>
        /// <param name="dpWidth">Width of Banner in dp</param>
        /// <param name="dpHeight">Height of Banner in dp</param>
        public static BannerAdSize FromDpUnits(int dpWidth, int dpHeight)
        {
            return new BannerAdSize((int)(dpWidth * k_DpToPixelRatio), (int)(dpHeight * k_DpToPixelRatio));
        }

        /// <summary>
        /// Cast to <see cref="Vector2Int"/>
        /// </summary>
        /// <param name="size">Banner Ad Size</param>
        /// <returns><see cref="Vector2Int"/> version of size</returns>
        public static implicit operator Vector2Int(BannerAdSize size)
        {
            return size?.m_Value ?? Vector2Int.zero;
        }

        /// <summary>
        /// Cast <see cref="Vector2Int"/> to banner ad size.
        /// </summary>
        /// <param name="size">Banner ad size.</param>
        /// <returns>Banner ad size object.</returns>
        public static implicit operator BannerAdSize(Vector2Int size)
        {
            return new BannerAdSize(size);
        }

        protected bool Equals(BannerAdSize other)
        {
            return m_Value.Equals(other.m_Value);
        }

        /// <summary>
        /// Determines object equivalency.
        /// </summary>
        /// <param name="obj">Other object</param>
        /// <returns>whether objects are equal</returns>
        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != this.GetType()) return false;
            return Equals((BannerAdSize)obj);
        }

        /// <summary>
        /// Retrieves the hash for this object
        /// </summary>
        /// <returns>object hash</returns>
        public override int GetHashCode()
        {
            return m_Value.GetHashCode();
        }
    }
}
