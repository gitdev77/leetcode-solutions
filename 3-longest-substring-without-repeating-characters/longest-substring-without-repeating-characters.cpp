class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;

        int l = 0;
        int maxlength = 0;

        for (int r = 0; r < s.size(); r++) {

            if (hash.find(s[r]) != hash.end()) {
                l = max(l, hash[s[r]] + 1);
            }

            hash[s[r]] = r;

            maxlength = max(maxlength, r - l + 1);
        }

        return maxlength;
    }
};