class Solution {
public:
    int longestPalindrome(string s) {
     map<char,int>mpp;
     int sum =0;
      bool hasOdd = false;
     for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
     }   
     for(auto it:mpp){
        if(it.second%2==0) sum+=it.second;
        else{
            sum+=(it.second-1);
            hasOdd = true;
        };
     }
     if(hasOdd) return sum + 1;
     return sum;
    }
};