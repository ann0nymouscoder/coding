#include <stack>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) 
    {
        stack<int> start;
        int k=s.length();
        
        for(int i=0;i<k;i++)  
        {
            if(!isalnum(s[i]))  
            {
                continue;
            }
            if(isupper(s[i]))  
            {
                s[i]=s[i]+32;
            }
            start.push(s[i]);
        }

        for(int i=0;i<k;i++) 
        {
            if(!isalnum(s[i]))  
            {
                continue;
            }
            if(isupper(s[i]))  
            {
                s[i]=s[i]+32;
            }
            if(s[i]!=start.top())  
            {
                return false;
            }
            start.pop();
        }
        return true;
    }
};
