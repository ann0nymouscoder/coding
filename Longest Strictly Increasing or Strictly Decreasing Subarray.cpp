class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
      int count=0;
      int maxi=0;
      for(int i=0;i<nums.size()-1;i++)
      {
        if(nums[i]<nums[i+1])
        {
            count++;
        }
        else
        {
            maxi=max(count,maxi);
            count=0;
        }
      }  
      maxi=max(count,maxi);
      for(int i=nums.size()-1;i>0;i--)
      {
        if(nums[i]<nums[i-1])
        {
            count++;
        }
         else
        {
            maxi=max(count,maxi);
            count=0;
        }
      }
      maxi=max(count,maxi);   
      return maxi+1;
    }
};
