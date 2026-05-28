import java.util.*;

class Solution {
    public String minWindow(String s, String t) {

        if (s.length() < t.length()) return "";

        int[] count = new int[128];

        for (char c : t.toCharArray()) {
            count[c]++;
        }

        int left = 0, right = 0;
        int minLen = Integer.MAX_VALUE;
        int start = 0;
        int required = t.length();

        while (right < s.length()) {

            char r = s.charAt(right);

            if (count[r] > 0)
                required--;

            count[r]--;
            right++;

            while (required == 0) {

                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }

                char l = s.charAt(left);

                count[l]++;

                if (count[l] > 0)
                    required++;

                left++;
            }
        }

        return minLen == Integer.MAX_VALUE ? "" : s.substring(start, start + minLen);
    }
}