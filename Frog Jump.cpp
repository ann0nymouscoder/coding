#include <bits/stdc++.h> 
int another(int k, vector<int> lost, vector<int>&dp)
{
    if(k==0)
    {
        return 0;
    }
    if(dp[k]!=-1)
    {
        return dp[k];
    }
    int left= another(k-1,lost, dp)+ abs(lost[k]-lost[k-1]);
    int right=INT_MAX;
    if(k>1)
    {
     right= another(k-2,lost, dp)+ abs(lost[k]-lost[k-2]);
        }
        return dp[k]=   min(right,left);

}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n,-1);
    return another(n-1,heights, dp);
}
