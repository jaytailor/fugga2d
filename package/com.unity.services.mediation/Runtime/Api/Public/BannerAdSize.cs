using UnityEngine;

namespace Unity.Services.Mediation
{
    /// <summary>
    /// Specifies a size for a Banner Ad.
    /// </summary>
    public class BannerAdSize
    {
        /// <summary>
        /// Preset for Ordinary Banner (320x50).
        /// </summary>
        public static BannerAdSize Banner = new BannerAdSize(320, 50);

        /// <summary>
        /// Preset for Large Banner (320x100).
        /// </summary>
        public static BannerAdSize LargeBanner = new BannerAdSize(320, 100);

        /// <summary>
        /// Preset for Medium Rectangle (320x250).
        /// </summary>
        public static BannerAdSize MediumRectangle = new BannerAdSize(300, 250);

        /// <summary>
        /// Preset for Leaderboard (728x90).
        /// </summary>
        public static BannerAdSize Leaderboard = new BannerAdSize(728, 90);

        /// <summary>
        /// Retrieves the Width of this Banner Size.
        /// </summary>
        public int Width => m_Value.x;

        /// <summary>
        /// Retrieves the Height of this Banner Size.
        /// </summary>
        public int Height => m_Value.y;

        readonly Vector2Int m_Value;

        /// <summary>
        /// Constructs a Banner Size
        /// </summary>
        /// <param name="width">Width of Banner</param>
        /// <param name="height">Height of Banner</param>
        public BannerAdSize(int width, int height) : this(new Vector2Int(width, height))
        {
        }

        /// <summary>
        /// Constructs a Banner Size
        /// </summary>
        /// <param name="size">size in a <see cref="Vector2Int"/> form</param>
        public BannerAdSize(Vector2Int size)
        {
            m_Value = size;
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
