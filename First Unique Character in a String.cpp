class Solution {
public:
    int firstUniqChar(string s) 
    {
    unordered_map<char,int>another;
     for(char c: s)
    { 
        another[c]++;
    }
   for (int i = 0; i < s.length(); i++) 
   {
         if (another[s[i]] == 1) 
           {
       return i;
            }
   }
    return -1;   
    }
};
