class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) { //bucket algo
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i ++){
            mp[nums[i]]++;// mp[key]==frequency!!
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &p : mp){
            bucket[p.second].push_back(p.first);
        }
        vector<int> ans;
        int count = 0;
        for(int i = nums.size() ; i >=0; i--){
            for(int j = bucket[i].size()-1; j >= 0; j--){
            if(bucket[i].empty()){
            continue;
            }
            ans.push_back(bucket[i][j]);
            count++;
             if(count == k){
             return ans;
            }
        }
        
    }

        return ans;
    }
};