class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_set<int> another;
        for (int num : nums) {
            if (another.count(num)) {
                another.erase(num);
            } else {
                another.insert(num);
            }
        }
        return another.empty();
    }
};
