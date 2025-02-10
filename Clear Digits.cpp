class Solution {
public:
    string clearDigits(string s) 
    {
    stack<char> start;
    string p="";
    for(int i=0;i<s.length();i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            start.push(s[i]);
        }
        else if(isdigit(s[i]))
        {
            start.pop();
        }
    }
    while(!start.empty())
    {
        p=start.top()+p;
        start.pop();
    } 
    return p;
    }
};
