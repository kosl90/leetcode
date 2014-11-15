class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        if (numRows == 0) return res;
        res.push_back(vector<int>(1,1));
        for (int i = 1; i < numRows; ++i) {
            vector<int> row(i+1, 1);
            for (int j = 1; j < i; ++j) {
                row[j] = res[i-1][j-1] + res[i-1][j];
            }
            res.push_back(row);
        }
        return res;
    }
};
