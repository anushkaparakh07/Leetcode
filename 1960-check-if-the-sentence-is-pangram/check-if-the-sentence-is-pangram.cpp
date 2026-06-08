class Solution {
public:
    bool checkIfPangram(string sentence) {
       vector<int>ans(26,0);
       for(char ch:sentence){
        ans[ch-'a']++;
       }
       for(int i=0;i<26;i++){
        if(ans[i]==0) return false;
       }
       return true;
    }
};