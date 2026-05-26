class Solution {
public:
    int maxFreqSum(string s) {
       map<char,int>mpp;
       for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
       } 
       int maxVowFreq = 0;
       int maxConFreq = 0;
       for(auto it:mpp){
        if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
            maxVowFreq = max(maxVowFreq,it.second);
        }else{
            maxConFreq = max(maxConFreq,it.second);
        }
       }
       return maxVowFreq+maxConFreq;
    }
};