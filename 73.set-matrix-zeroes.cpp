#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> zeros;
        
        // Step 1: Find all zeros
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                    vectro 
                }
            }
        }
        
        // Step 2: Set rows and columns to zero
        for (auto p : zeros) {
            // Set entire row to 0
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[p.first][j] = 0;
            }
            
            // Set entire column to 0
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][p.second] = 0;
            }
        }
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    solution.setZeroes(matrix);

    // Print result
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
        
    }

    return 0;
}