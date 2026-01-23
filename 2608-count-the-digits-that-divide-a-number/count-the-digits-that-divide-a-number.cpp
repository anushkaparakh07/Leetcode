class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int n = num;
        while(num>0){
            int last=num%10;
            if(n%last==0){
                cnt++;
            }
            num/=10;
        }
        return cnt;
    }
};