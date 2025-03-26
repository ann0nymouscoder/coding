class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int i=0;
        int j=0;
        string another="";
    while(i<word1.length() && j<word2.length())
    {
        another=another+word1[i]+word2[j];
        i++;
        j++;
    }    
    for(j;j<word2.length();j++)
    {
        another=another+word2[j];
    }
    for(i;i<word1.length();i++)
    {
        another=another+word1[i];
    }
    return another;
    }
};
