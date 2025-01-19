class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        int start = 0;
        int end = 0;  
        int k = words.size();
        string s = "";

        for (int i = 0; i < k; i++) {
            start = 0;
            end = words[i].length() - 1;
            bool isPalindrome = true;

            while (start < end) {
                if (words[i][start] != words[i][end]) {
                    isPalindrome = false;
                    break;
                }
                start++;
                end--;
            }

            if (isPalindrome) {
                s = words[i];
                return s;
            }
        }

        return s;
    }
};
