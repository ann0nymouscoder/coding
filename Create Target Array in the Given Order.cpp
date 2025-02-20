class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int temp1 = index[i];
            int temp2 =  nums[i];
            v.insert(v.begin() + temp1, temp2);
        }
        return v;
    }
};
