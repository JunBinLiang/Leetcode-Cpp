class Solution {
public:
    void merge(vector<int>& a, int n, vector<int>& b, int m) {
        vector<int> res;
        int i = 0, j = 0;
        while(i < n && j < m) {
            if(a[i] < b[j]) {
                res.push_back(a[i++]);
            } else {
                res.push_back(b[j++]);
            }
        }
        while(i < n) {
            res.push_back(a[i++]);
        }
        while(j < m) {
            res.push_back(b[j++]);
        }
        
        for(int i = 0; i < res.size(); i++) {
            a[i] = res[i];
        }
    }
};