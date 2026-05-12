#include <cctype> 
class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(char ch: s){
            ch = tolower(ch);
            if((ch>='0' && ch<='9')||(ch>='a' && ch<='z')){
                res+=ch;
            }
        }
        string dup = res;
        reverse(res.begin(),res.end());
        if(dup==res) return true;
        return false;
    }
};