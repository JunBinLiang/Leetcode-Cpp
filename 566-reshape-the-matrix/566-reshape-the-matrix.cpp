class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if(n * m != r * c) {
            return mat;
        }
        
        vector<vector<int>> res(r, vector<int>(c));
        int id = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                res[id / c][id % c] = mat[i][j];
                cout << mat[i][j] << " "<< id << endl;
                id++;
            }
        }
        return res;
    }
};