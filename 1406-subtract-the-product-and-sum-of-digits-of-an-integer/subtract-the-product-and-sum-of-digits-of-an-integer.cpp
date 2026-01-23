class Solution {
public:
    int subtractProductAndSum(int n) {
       int sum =0;
       int prod = 1;
       while(n>0){
        int last = n%10;
        sum+=last;
        prod*=last;
        n/=10;
       } 
       int totalDiff = prod - sum;
       return totalDiff;
    }
};