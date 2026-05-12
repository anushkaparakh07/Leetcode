class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int>arr(26,0);
        for(char ch:s){
            arr[ch-'a']++;
        }
        for(char ch1:t){
            arr[ch1-'a']--;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0) return false;
        }
        return true;
    }
};