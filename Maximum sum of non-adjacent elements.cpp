#include <bits/stdc++.h>
int contain(int idx, vector<int>&nums, vector<int> & dp)
{
    if(idx==0)
    {
        return nums[idx];
    }
    if(idx==1)
    {
        return max(nums[0], nums[1]); 
    }
    if(dp[idx]!=-1)
    {
        return dp[idx];
    }
    
        int left=nums[idx]+contain(idx-2,nums,dp);
        int right=0+contain(idx-1,nums,dp);
    
    return dp[idx]=max(left,right);
} 
int maximumNonAdjacentSum(vector<int> &nums){
    int p=nums.size();
    vector<int>dp(p,-1);
    return contain(p-1,nums,dp);
}
