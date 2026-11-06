class Solution {
public:
    int findMaxLength(vector<int>& nums) {
         //
         unordered_map<int,int> mp;
         mp[0]=-1;
         
         int maxlen = 0;
         int presum = 0;
         for(int i = 0; i < nums.size(); i++){
         if(nums[i]==0)nums[i]=-1;
         presum += nums[i];
         if(mp.find(presum)!=mp.end()){
            maxlen = max(maxlen,i -mp[presum]);
         }else{
            mp[presum]=i;
         }
         }
         return maxlen;

         
    }
};