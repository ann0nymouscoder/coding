class Solution {
public:
    vector<int> minCosts(vector<int>& cost) 
    {
        vector<int>another;
        int count=INT_MAX;
    for(int i=0;i<cost.size();i++)
        {
            count=min(count,cost[i]);
            another.push_back(count);
        }
        return another;
    }
};
