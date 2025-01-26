class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int k=nums.size();
        int total_mul=1;
        vector<int> tot;
        int n=1;
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(nums[i]!=0)
            {
                n=n*nums[i];
            }
            else if(nums[i]==0)
            {
                count++;
            }
            total_mul=total_mul*nums[i];
        }
        for(int i=0;i<k;i++)
        {
            if(nums[i]==0 && count<=1)
            {
                tot.push_back(n);
            }
            else if(nums[i]==0 && count>1)
            {
                tot.push_back(0);
            }
            else
            {
                tot.push_back(total_mul/nums[i]);
            }
        }
        return tot;
    }
};Product of Array Except Self
