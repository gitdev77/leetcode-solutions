class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       unordered_map<int,int> mp;
       int currsum = 0;
       int ans = 0;
       mp[0] =1;
       for(int i = 0; i<nums.size(); i++){
        currsum += nums[i];
        int need = currsum - goal;
       if(mp.find(need)!= mp.end()){
       ans = ans + mp[need];
       }
       mp[currsum]++;

       }
       return ans;
       }
       
};