#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
        if (s.length() != t.length()) {
            return false;
        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;
        ;
        mapST[s[i]] = t[i];
        for(int i = 0; i < s.length(); i++) {
            if(mapST.count(s[i]) && mapST[s[i]] != t[i]) {
          

            
            return false; 
        }
          if(mapTS.count(t[i]) && mapTS[t[i]] != s[i]) {
          return false;
           
        
        }
        return true;

    }
        }
};

    }
}

