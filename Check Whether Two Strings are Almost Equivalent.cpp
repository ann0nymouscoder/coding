class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) 
    {
        unordered_map<char,int> another1;
        unordered_map<char,int> another2;
        
        for(char c : word1) 
        {
            another1[c]++;
        }
        for(char c : word2) 
        {
            another2[c]++;
        }  
        for(char c = 'a'; c <= 'z'; c++) 
        {
            if(abs(another1[c] - another2[c]) > 3) 
            {
                return false;
            }
        }    
        return true;
    }
};
