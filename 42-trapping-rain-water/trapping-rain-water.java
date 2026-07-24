class Solution{
    public int trap(int[] height){
        int n = height.length;
         int[] left = new int[n];
         int[] right = new int[n];
         for(int i=0;i<n;i++){
            left[i] = height[i];
        }
         for(int i=0;i<n;i++){
            right[i] = height[i];
        }
         for(int i=1;i<n;i++){
            if (left[i]<left[i-1]){
                left[i] = left[i-1];
            }
        }
         for(int i=n-2;i>=0;i--){
            if (right[i]<right[i+1]){
                right[i] = right[i+1];
            }
        }
        int water = 0;
         for(int i=0;i<n;i++){
            if(left[i]<right[i]){
               water += left[i] - height[i];
} 
            else{
                water += right[i] - height[i];
}
        }
        return water;
    }
}