class Solution {
public:
    int maxSum(vector<int>& nums) 
    {
        int count=0;
        int max1=nums[0];
        vector<int>another;
        sort(nums.begin(),nums.end());
    for(int i=nums.size()-1;i>=0;i--)
    {
        if(find(another.begin(), another.end(), nums[i])==another.end())
        {
            another.push_back(nums[i]);
            count=count+nums[i];
            max1=max(max1,count);
        }
    }
    return max1;    
    }
};
