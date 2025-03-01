class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) 
    {
    int k=nums.size();
    vector<int> another(k,0);
    for(int i=0;i<k-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            nums[i]=2*nums[i];
            nums[i+1]=0;
        }
    }int index=0;
   for(int i=0;i<k;i++)
   {
    if(nums[i]!=0)
    {
        another[index]=nums[i];
        index++;
    }
   }
   return another;  
    }
};
