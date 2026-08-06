class Solution {
public:
    int characterReplacement(string s, int k) {

        // req changes agar k se bade hai 
        //if yes then window invalid
        //move the left
        //if no move the right
        unordered_map<char,int> mp;
        int l = 0 ;
        int r = 0 ;
        int maxfreq = 0;
        int maxlen = 0;
        for (r = 0; r< s.size(); r++){
           mp[s[r]]++;
          maxfreq = max(maxfreq, mp[s[r]]);
          
            int change = (r-l+1) - maxfreq;
        
         if(change > k){
            mp[s[l]]--;
           l++;
         }
         maxlen= max(maxlen, r-l+1);
        }
        return maxlen;
    }
};