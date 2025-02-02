class Solution {
public:
    // time/space: O(limit^2)/O(1)
    int distributeCandies(int n, int limit) {
        int result = 0;
        for (int i = 0; i <= limit; i++) {
            for (int j = 0; j <= limit; j++) {
                int k = n - (i + j);
                if ((0 <= k) && (k <= limit)) result++;
            }
        }
        return result;
    }
};
another approach
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int maxLen=0;
    int left=0;
    int right=0;
    set<char> megaSet;
    while(right<s.length())
    {
        if(megaSet.find(s[right])==megaSet.end())
        {
            megaSet.insert(s[right++]);
            maxLen=max(maxLen,(int)megaSet.size());
        }
        else
        {
            megaSet.erase(s[left++]);
        }
    }
    return maxLen;
    }
};
