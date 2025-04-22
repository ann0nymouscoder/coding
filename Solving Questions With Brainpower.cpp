class Solution {
public:
    long long test(long long idx,vector<vector<int>> &questions, vector<long long> &dp)
    {
        int n=questions.size();
        if(idx>=n)
        {
            return 0;
        }
        if(dp[idx]!=-1)
        {
            return dp[idx];
        }
        long long left= questions[idx][0]+test(idx+questions[idx][1]+1,questions,dp);
        long long right=0+test(idx+1,questions,dp);
        return dp[idx]=max(left,right);
    }
    long long mostPoints(vector<vector<int>>& questions) 
    {
        long long k=questions.size();
    vector<long long> dp(k,-1);
    return test(0,questions,dp);    
    }
};
