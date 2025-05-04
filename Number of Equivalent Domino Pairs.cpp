class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> mp;
        int count = 0;
        
        for (auto& d : dominoes) {
            int a = d[0];
            int b = d[1];
            if (a > b) swap(a, b);
            int key = a * 10 + b;
            count += mp[key];
            mp[key]++;
        }

        return count;
    }
};
