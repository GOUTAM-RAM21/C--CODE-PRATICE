#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> t(n, vector<int>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                t[i][j] = matrix[j][i];
            }
        }
        return t;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    Solution s;
    vector<vector<int>> result = s.transpose(matrix);

    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
