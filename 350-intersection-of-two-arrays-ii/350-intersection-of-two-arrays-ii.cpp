class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int, int> f;
        for(int i : nums1) {
            f[i]++;
        }
        for(int i : nums2) {
            if(f[i] > 0) {
                res.push_back(i);
                f[i]--;
            }
        }
        return res;
    }
};