class Solution {
public:
    int reverse(int x) {
    long long rev = 0;
    while(x!=0){
        int ld = x%10;
        rev = (rev*10)+ld;
        x/=10;
    }
    int mi = INT_MIN;
    int ma = INT_MAX;
    if(rev>mi && rev<ma){
       return rev;
    }else{
        return 0;
    }
}
};