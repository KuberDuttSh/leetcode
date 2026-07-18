class Solution {
    public int[] arrayRankTransform(int[] arr) {

        int[] temp = arr.clone();
        Arrays.sort(temp);

        int size = 0;

        for (int i = 0; i < temp.length; i++) {
            if (i == 0 || temp[i] != temp[i - 1]) {
                temp[size] = temp[i];
                size++;
            }
        }

        int[] ans = new int[arr.length];

        for (int i = 0; i < arr.length; i++) {
            ans[i] = Arrays.binarySearch(temp, 0, size, arr[i]) + 1;
        }

        return ans;
    }
}