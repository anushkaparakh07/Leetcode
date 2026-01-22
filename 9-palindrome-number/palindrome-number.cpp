class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;
        long int rev=0;
        while(x>0){
            int last=x%10;
            rev=(rev*10)+last;
            x/=10;
        }      
        if(dup==rev) return true;
    return false;
    }
};