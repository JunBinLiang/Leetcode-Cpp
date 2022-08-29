class Solution {
public:
    bool isSubsequence(string s, string t) {
        for(int i = 0, j = 0; i < t.size() && ((j < s.size() && s[j] == t[i] && j++) || true); i++) if(j >= s.size()) return true;
        return s.size() == 0 ? true : false;
    }
};