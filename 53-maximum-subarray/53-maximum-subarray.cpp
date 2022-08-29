class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int res = a[0];
        for(int i = 0, sum = 0; i < a.size() && ((sum + a[i] < 0 ? sum = 0 : res = max(res, sum += a[i])) || true); res = max(res, a[i]), i++){}
        return res;
    }
};