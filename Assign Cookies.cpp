class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
    int left=0;
    int right=0;
    int count=0;
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    while(left<g.size() && right<s.size())
    {
        if(g[left]<=s[right])
        {
            count++;
            left++;
            right++;
        }
        else
        {
            right++;
        }
    }
    return count;    
    }
};
