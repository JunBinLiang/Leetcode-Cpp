class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        for(; i < t.size() && ((j < s.size() && s[j] == t[i] && j++) || true); i++);
        return j >= s.size();
    }
};