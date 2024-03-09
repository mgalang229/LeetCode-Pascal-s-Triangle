class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        vector<int> temp;
        ans[0] = {1};
        for (int i = 1; i < numRows; i++) {
            temp.push_back(1);
            for (int j = 0; j < ans[i-1].size() - 1; j++) {
                temp.push_back(ans[i-1][j] + ans[i-1][j+1]);
            }
            temp.push_back(1);
            ans[i] = temp;
            temp.clear();
        }
        return ans;
    }
};
