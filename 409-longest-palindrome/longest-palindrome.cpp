class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int longSum = 0;
        for(auto it:mpp){
            if(it.second%2==0) longSum+=it.second;
            else longSum+=(it.second-1);
        }
        for(auto it:mpp){
            if(it.second%2!=0) return longSum+=1;
        }
        return longSum;
    }
};