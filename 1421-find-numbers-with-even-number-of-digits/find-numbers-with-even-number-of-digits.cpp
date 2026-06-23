class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0; 
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            int n = nums[i];
            while(n>0){
                int last=n%10;
                cnt++;
                n/=10;
            }
            if(cnt%2==0) ans++;
        }
        return ans;
    }
};