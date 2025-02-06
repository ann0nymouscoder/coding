#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) 
    {
        unordered_map<int, int> arr;
        int count = 0;

        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                int product = nums[i] * nums[j];
                arr[product]++;
            }
        }

        for(auto& it : arr)
        {
            if(it.second > 1)
            {
                count += it.second * (it.second - 1) * 4;
            }
        }

        return count;
    }  
};
