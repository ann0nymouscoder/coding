class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long count = 0;
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            count += stoll(to_string(nums[i]) + to_string(nums[j]));
            i++;
            j--;
        }

        if (i == j) {
            count += nums[i];
        }

        return count;
    }
};
