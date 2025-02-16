class Solution {
public:
    int minimumCost(vector<int>& nums) 
    {
        int sum=nums[0];
    std:: sort(nums.begin()+1,nums.end());
     sum=sum+nums[1]+nums[2];
    return sum;    
    }
};
