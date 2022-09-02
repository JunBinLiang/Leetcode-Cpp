class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> cnt(256);
        for(char c : s) {
            cnt[c]++;
        }
        
        int res = 0, odd = 0;
        for(int i = 0; i < 256; i++) {
            res += (cnt[i] / 2 * 2) ;
            if(cnt[i] % 2 == 1) odd = 1;
        }
        return res + odd;
    }
};