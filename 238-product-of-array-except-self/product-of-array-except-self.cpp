class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftproduct = 1;
        int rightproduct = 1;
        vector<int> ans(nums.size());
        for(int i = 0; i < nums.size(); i++){//doubt
            ans[i]=leftproduct;
           leftproduct *= nums[i];
        }
        for(int j = nums.size()-1; j >= 0; j--){
            ans[j]*=rightproduct;
            rightproduct *= nums[j];//prepare for next ans
        }
        return ans;

    }
};