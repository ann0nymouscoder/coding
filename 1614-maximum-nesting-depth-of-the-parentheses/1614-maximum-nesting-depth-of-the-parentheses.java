import java.util.Arrays;

class Solution {
    public int maxDepth(String s) {
        int p = s.length();
        int count = 0;
        int maxDepth = 0;

        int[] arr = new int[p];
        int j = 0;

        for (int i = 0; i < p; i++) {
            if (s.charAt(i) == '(') {
                count++;
                arr[j] = count;
                j++;
                maxDepth = Math.max(maxDepth, count);
            } else if (s.charAt(i) == ')') {
                count--;
            }
        }

        return maxDepth;
    }
}