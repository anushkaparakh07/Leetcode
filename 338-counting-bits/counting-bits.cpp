class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int cnt = 0;
        for(int i=0;i<=n;i++){
            int num = i;
            int cnt = 0;
            while(num>0){
                if(num&1) cnt++;
                num=num>>1;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};