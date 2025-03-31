class Solution {
public:
    bool canJump(vector<int>& nums) {
        int count = 0;
        if (nums.size() == 1) {
            return true;
        }
       for(int i=0;i<nums.size();i++)
       {
        if(i>count)
        {
            return false;
        }
        count=max(count, i+nums[i]);
        if(count>=nums.size()-1)
        {
            return true;
        }
       }

        return false;
    }
};
