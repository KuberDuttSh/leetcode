int searchInsert(int* nums, int numsSize, int target) {
    int l = 0, h = numsSize - 1, m;

    while (l <= h) {
        m = (l + h) / 2;

        if (nums[m] == target)
            return m;
        else if (target < nums[m])
            h = m - 1;
        else
            l = m + 1;
    }

    return l;
}