class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        map<char, char> f;
        set<char> use;
        for(int i = 0; i < n; i++) {
            if(f.find(s[i]) == f.end()) {
                if(use.find(t[i]) != use.end()) {
                    return false;
                }
                f[s[i]] = t[i];
                use.insert(t[i]);
            } else {
                if(f[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};