double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i=0,j=0,k=0;
    int m[nums1Size + nums2Size];

    while (i < nums1Size && j < nums2Size)
    {
        m[k++] = (nums1[i] < nums2[j]) ? nums1[i++] : nums2[j++];
    }

    while (i < nums1Size)
    {
         m[k++] = nums1[i++];
    }
    while (j < nums2Size) 
    { 
        m[k++] = nums2[j++];
    }

    int total = nums1Size + nums2Size;

   if (total % 2 == 1) {
    return m[total / 2];
} else {
    return (m[total / 2 - 1] + m[total / 2]) / 2.0;
}
}