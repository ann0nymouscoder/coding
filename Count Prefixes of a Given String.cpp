class Solution {
public:
    int countPrefixes(vector<string>& words, string s) 
    {
    string start="";
    int total=0;
    unordered_map<string , int > count;
    for(int i=0;i<s.length();i++)
    {
        start=start+s[i];
        count[start]=1;
    }  
    for(int i=0;i<words.size();i++)
    {
        if(count.find(words[i]) !=count.end())
        {
            total++;
        }
    }  
    return total;
    }
};
