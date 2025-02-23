class Solution {
public:
    bool hasSameDigits(string s) {
        int k = s.length();
        vector<int> arr(k);

        for (int i = 0; i < k; i++) {
            arr[i] = s[i] - '0';
        }

        while (k > 2) {
            for (int i = 0; i < k - 1; i++) {
                arr[i] = (arr[i] + arr[i + 1]) % 10;
            }
            k--;
        }

        return arr[0] == arr[1];
    }
};
