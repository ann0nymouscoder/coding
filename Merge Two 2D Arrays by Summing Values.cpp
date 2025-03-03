class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
    {
        int i=0;
        int j=0;
         vector<vector<int>> an;
    while(i<nums1.size() && j<nums2.size())
    {
        int a1= nums1[i][0], val1=nums1[i][1];
        int a2= nums2[j][0], val2=nums2[j][1];
        if(a1>a2)
        {
            an.push_back({a2,val2});
            j++;
        }
        else if(a1<a2)
        {
            an.push_back({a1,val1});
            i++;
        }
        else
        {
           an.push_back({a2,val1+val2});
        i++;
        j++;
        }
    }
    while(i<nums1.size())
    {
        an.push_back(nums1[i]);
        i++;
    } 
     while(j<nums2.size())
    {
        an.push_back(nums2[j]);
        j++;
    } 
    return an;   
    }
};
