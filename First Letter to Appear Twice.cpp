class Solution {
public:
    char repeatedCharacter(string s) 
    {
    unordered_map<char,int> another;
    char a=' ';
    for(char p: s)
    {
        another[p]++;
        if(another[p]>1)
        {
            a=p;
            break;
        }
    }
    return a  ; 
    }
};
