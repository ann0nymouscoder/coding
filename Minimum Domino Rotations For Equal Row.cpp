class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) 
    {
        int k = tops.size();
        unordered_map<int, int> tot1;
        unordered_map<int, int> tot2;

        int max1 = 0, num1 = 0;
        int max2 = 0, num2 = 0;

        for(int i = 0; i < k; i++)
        {
            tot1[tops[i]]++;
            if (tot1[tops[i]] > max1) 
            {
                max1 = tot1[tops[i]];
                num1 = tops[i];
            }

            tot2[bottoms[i]]++;
            if (tot2[bottoms[i]] > max2)
            {
                max2 = tot2[bottoms[i]];
                num2 = bottoms[i];
            }
        }

        int res1 = check(num1, tops, bottoms);
        int res2 = check(num2, tops, bottoms);

        if (res1 == -1 && res2 == -1) return -1;
        if (res1 == -1) return res2;
        if (res2 == -1) return res1;
        return min(res1, res2);
    }

    int check(int target, vector<int>& tops, vector<int>& bottoms)
    {
        int countTop = 0, countBottom = 0;
        for (int i = 0; i < tops.size(); i++) {
            if (tops[i] != target && bottoms[i] != target)
                return -1;
            if (tops[i] != target) countTop++;
            if (bottoms[i] != target) countBottom++;
        }
        return min(countTop, countBottom);
    }
};

