class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
     // find the size of the array 
     //compute the sum of the first k
     int l =0;
     int n = cardPoints.size();
     int r= n-1;
     int currsum = 0;
     int maxsum = 0;
     for (int i=0; i< k; i++){
     currsum = currsum + cardPoints[i];
     maxsum = currsum;
     l = k-1;
     r = n-1;
     }
     for (int i=0; i< k; i++){
        currsum = currsum - cardPoints[l];
        currsum = currsum + cardPoints[r];
        maxsum = max(maxsum, currsum);
        l--;
        r--;
     }
     

  return maxsum;
    }
};