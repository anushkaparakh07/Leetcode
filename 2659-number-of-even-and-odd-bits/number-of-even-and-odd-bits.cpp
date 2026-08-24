class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>ans;
        int cnt = 0;
        int even = 0;
        int odd = 0;
        while(n>0){
            if(n&1){
                if(cnt%2==0){
                    even++;
                }else{
                    odd++;
                }
            }
            cnt++;
            n = n>>1;
        }
        return {even,odd};
    }
};