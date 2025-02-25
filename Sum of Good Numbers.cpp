class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) 
    {
        int count = 0;
        int p = nums.size();
        for(int i = 0; i < p; i++)
        {
            if ((i - k >= 0 && i + k < p && nums[i] > nums[i - k] && nums[i] > nums[i + k]) ||
                (i - k >= 0 && i + k >= p && nums[i] > nums[i - k]) ||
                (i - k < 0 && i + k < p && nums[i] > nums[i + k])) 
            {
                count = count + nums[i];
            }
        }
        return count;    
    }
};
