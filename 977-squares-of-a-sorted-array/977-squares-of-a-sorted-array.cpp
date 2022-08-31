class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        
        int l = n - 1, r = n;
        for(int i = 0; i < n; i++) {
            if(nums[i] >= 0) {
                r = i;
                l = i - 1;
                break;
            }
        }
        
        while(l >= 0 && r < n) {
            if(nums[l] * nums[l] <= nums[r] * nums[r]) {
                res.push_back(nums[l] * nums[l]);
                l--;
            } else {
                res.push_back(nums[r] * nums[r]);
                r++;
            }
        }
        
        while(l >= 0) {
            res.push_back(nums[l] * nums[l]);
            l--;
        }
        
        while(r < n) {
            res.push_back(nums[r] * nums[r]);
            r++;
        }
        
        return res;
    }
};