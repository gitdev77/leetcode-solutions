class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int x = 0;
        int y = 0;
       for(int i = 0; i < nums.size(); i++){
        x = x + nums[i];
       int n = nums[i];
       while(n>0){
       y = y + n%10;
       n /= 10; 
       }
       }
        return abs(x-y);
    }
};