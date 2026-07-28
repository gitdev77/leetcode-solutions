#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:

void nextPermutation (vector <int>& nums){


int pivot = - 1;
for (int i = nums.size()-2; i >=0  ; i--){
    if ( nums[i]<nums[i+1]){
         pivot = i;
          break;
    }
    }
    if (pivot ==-1){
        reverse(nums.begin(),nums.end());
        return;

    }
    for(int i = nums.size()-1; i > pivot; i --){
    if(nums[i]>nums[pivot]){
    swap(nums[i],nums[pivot]);


        }
    }
 reverse (nums.begin() + pivot + 1, nums.end());
}
};

int main() {
Solution solution;
vector<int> nums = {1, 2, 3}; // Example input
solution.nextPermutation(nums);

// Output the result
for (int num : nums) {
    cout << num << " ";
}
cout << endl;

return 0;
}

 

















