class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int count = 1;
        if (s.length() == 1 && k == 1) return true;

        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                count++;
            } else {
                if (count == k && (i + 1 >= s.length() || (i - k + 1 < 0 || s[i + 1] != s[i - k + 1]))) {
                    return true;
                }
                count = 1; 
            }
        }
        return count == k;  
    }
};

