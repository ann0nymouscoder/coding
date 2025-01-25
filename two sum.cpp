class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> al;
        vector<int> tot;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (al.find(complement) != al.end()) {
                tot.push_back(al[complement]);
                tot.push_back(i);
                return tot;
            }
            al[nums[i]] = i;
        }
        return tot;
    }
};
