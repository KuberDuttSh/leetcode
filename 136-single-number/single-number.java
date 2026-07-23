class Solution {
    public int singleNumber(int[] nums) {
        int lakshya = 0;
        for(int i=0;i<nums.length;i++){
            lakshya = lakshya ^ nums[i];
        }
        return lakshya;
    }
}