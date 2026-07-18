class Solution {
    public int findGCD(int[] nums) {
        Arrays.sort(nums);
        int first = nums[0];
        int last = nums[nums.length - 1];
                return gcd(first, last);

        }
      int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    
    }
}