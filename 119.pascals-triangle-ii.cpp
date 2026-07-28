#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       int n = numRows;
        vector<vector<int>> ans; // vect cont many rows

        vector<int> prev = {1};

        ans.push_back(prev);

        for(int i = 1; i < n; i++) {

            vector<int> curr;

            curr.push_back(1);

            for(int j = 1; j < i; j++) {

                curr.push_back(prev[j-1] + prev[j]);

            }

            curr.push_back(1);

            ans.push_back(curr);

            prev = curr;
        }

        return ans;
    }
};

int main() {

    Solution obj;

    int numRows = 5;

    vector<vector<int>> result = obj.generate(numRows);

    for(auto row : result) {

        for(auto val : row) {

            cout << val << " ";

        }

        cout << endl;
    }

    return 0;
}