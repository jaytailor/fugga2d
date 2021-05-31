using System;
using Unity.Mediation.Dashboard.Editor;

namespace Unity.Mediation.Settings.Editor
{
    class AdUnitData
    {
        public string AdUnit;
        public string Platform;
        public string AdFormat;
        public string Id;

        public AdUnitData(DashboardClient.AdUnitInfoJson adUnitInfo)
        {
            AdFormat = adUnitInfo?.AdFormat;
            Id = adUnitInfo?.AdUnitId;
            AdUnit = adUnitInfo?.Name;
            Platform = adUnitInfo?.Platform;
        }

        public static int CompareByAdUnit(SortMode sortMode, AdUnitData data, AdUnitData unitData)
        {
            return CompareStringsWithSortMode(sortMode, data.AdUnit, unitData.AdUnit);
        }

        public static int CompareByAdFormat(SortMode sortMode, AdUnitData data, AdUnitData unitData)
        {
            return CompareStringsWithSortMode(sortMode, data.AdFormat, unitData.AdFormat);
        }

        public static int CompareByPlatform(SortMode sortMode, AdUnitData data, AdUnitData unitData)
        {
            return CompareStringsWithSortMode(sortMode, data.Platform, unitData.Platform);
        }

        public static int CompareById(SortMode sortMode, AdUnitData data, AdUnitData unitData)
        {
            return CompareStringsWithSortMode(sortMode, data.Id, unitData.Id);
        }

        static int CompareStringsWithSortMode(SortMode sortMode, string strA, string strB)
        {
            switch (sortMode)
            {
                case SortMode.Descending:
                    return String.CompareOrdinal(strA, strB);
                case SortMode.Ascending:
                    return String.CompareOrdinal(strB, strA);
                default:
                    return 0;
            }
        }
    }
}
