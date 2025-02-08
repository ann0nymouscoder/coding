class Solution {
public:
    bool isValid(string s) 
    {
    stack<int> start;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('|| s[i]=='['|| s[i]=='{')
        {
            start.push(s[i]);
        }
        else
        {
            if(start.empty())
            {
                return false;
            }
            else if((s[i]==')' &&start.top()=='(') || (s[i]=='}' &&start.top()=='{')|| (s[i]==']' &&start.top()=='['))
            {
                start.pop();
                continue;
            }
            else
            {
                return false;
            }
        }
    } 
    if(!start.empty())
    {
        return false;
    }
    return true;   
    }
};
