class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) 
    {
     vector<int> another;
     for(int i=0;i<grid.size();i++)
     {
        vector<int>l=grid[i];
        sort(l.rbegin(), l.rend());
        for(int j=0;j<limits[i];j++)
        {
            another.push_back(l[j]);
        }
     }  
     long long sum=0;
     sort(another.rbegin(),another.rend());  
     for(int i=0;i<k;i++)
     {
        sum=sum+another[i];
     }
     return sum;
    }
};
