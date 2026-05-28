int maxArea(int* height, int heightSize) {
    int l = 0;
    int r = heightSize - 1;
    int m = 0;
    int t;
    while (l < r) {
        if (height[l] < height[r])
            t = height[l];
        else
            t = height[r];
        int w = r - l;
        int a = t * w;
        if (a > m)
            m = a;
        if (height[l] < height[r])
            l++;
        else
            r--;
    }
    return m;
}