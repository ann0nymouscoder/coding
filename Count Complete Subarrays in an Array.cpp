class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) 
    {
        int total = 0;
        int n = nums.size();
        
        unordered_set<int> distinctSet(nums.begin(), nums.end());
        int distinct = distinctSet.size();

        for(int i = 0; i < n; i++) {
            unordered_map<int, int> freq;
            for(int j = i; j < n; j++) {
                freq[nums[j]]++;
                if(freq.size() == distinct) {
                    total++;
                }
            }
        }

        return total;
    }
};
