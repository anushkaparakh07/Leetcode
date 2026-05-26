class Solution {
public:
    char repeatedCharacter(string s) {
        map<int,int>arr;
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
            if(arr[s[i]]==2) return s[i];
        }
        return 0;
    }
};