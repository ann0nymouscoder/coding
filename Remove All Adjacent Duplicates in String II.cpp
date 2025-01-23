class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> l;
        string h = "";

        for (char i : s) {
            if (!l.empty() && l.top().first == i) {
                l.top().second++;
                if (l.top().second == k) {
                    l.pop();
                }
            } else {
                l.push({i, 1});
            }
        }

        while (!l.empty()) {
            h = string(l.top().second, l.top().first) + h;
            l.pop();
        }

        return h;
    }
};
