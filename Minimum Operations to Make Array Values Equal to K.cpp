class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int count=0;
    unordered_map<int,int>another;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<k)
        {
            return -1;
        }
        else
        {
            if(another.count(nums[i])==0 && nums[i]!=k)
            {
                count++;
            }
            another[nums[i]]++;
        }
    }
    return count;
    }
};
