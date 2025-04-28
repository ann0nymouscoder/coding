class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> tot;
        int count=0;
        int p=0;
        bool n=false;
     for(int i=0;i<nums1.size();i++)
     {
        for(int j=0;j<nums2.size();j++)
        {
            if(nums1[i]==nums2[j])
            {
                p=j;
                n=true;
                continue;
            }
            if(n==true && j>p && nums2[j]>nums1[i])
            {
                count=nums2[j];
                break;
            }
        }
        n =false;
        if(count==0)
        {
            tot.push_back(-1);
        }
        else
        {
            tot.push_back(count);
        }
        count=0;
     } 
     return tot;  
    }
};
