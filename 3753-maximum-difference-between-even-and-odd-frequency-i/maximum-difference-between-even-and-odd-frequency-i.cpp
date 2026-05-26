class Solution {
public:
    int maxDifference(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int maxEvenFre = INT_MAX;
        int maxOddFre = INT_MIN;  
        for(auto it:mpp){
            if(it.second%2==0) maxEvenFre = min(maxEvenFre,it.second);
            else maxOddFre = max(maxOddFre,it.second);
        }
        return maxOddFre-maxEvenFre;
    }
};