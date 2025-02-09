#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) 
    {
        long long k = (long long)nums.size() * (nums.size() - 1) / 2;
        long long count = 0;
        unordered_map<int, int> start;

        for (int i = 0; i < nums.size(); i++) 
        {
            count += start[nums[i] - i];
            start[nums[i] - i]++;
        }
        
        return k - count;
    }
};
