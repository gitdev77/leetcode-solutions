#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i ++){
            result = result ^ nums[i];
            }
            return result;
            }
        };

        int main() {
            Solution solution;
            vector<int> nums = {4, 1, 2, 1, 2};
            int result = solution.singleNumber(nums);
            cout << "The single number is: " << result << endl;
            return 0;
        }
    
// @lc code=end

