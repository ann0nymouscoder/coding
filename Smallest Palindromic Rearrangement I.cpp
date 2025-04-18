class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }

        int oddCount = 0;
        char midChar = '$';
        for (auto &[ch, cnt] : mp) {
            if (cnt % 2 != 0) {
                oddCount++;
                midChar = ch;
            }
        }

        if (oddCount > 1) return "";

        string half = "";
        for (auto &[ch, cnt] : mp) {
            half += string(cnt / 2, ch);
        }

        sort(half.begin(), half.end());  

        string res = half;
        if (midChar != '$') {
            res += string(1, midChar);
        }

        reverse(half.begin(), half.end());
        res += half;

        return res;
    }
};
