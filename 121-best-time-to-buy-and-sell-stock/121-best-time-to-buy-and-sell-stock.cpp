class Solution {
public:
    int maxProfit(vector<int>& a) {
        int res = 0, mn = a[0];
        for(int i = 1; i < a.size(); i++) {
            res = max(res, a[i] - mn);
            mn = min(mn, a[i]);
        }
        return res;
    }
};