class Solution {
public:
    int countElements(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n-1;i++)
        {
            if((nums[i]>nums[0]) && (nums[i]<nums[n-1])) c++;
        }
        return c;
    }
};
