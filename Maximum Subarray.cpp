class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
    int current=nums[0];
    int global=nums[0];
    int k=nums.size();
    for(int i=1;i<k;i++)
    {
        current=max(nums[i],current+nums[i]);
        if(current>global)
        {
            global=current;
        }
    }    
    return global;
    }
};
