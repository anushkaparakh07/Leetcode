class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l = 0;
        int pro =1 , count=0;
        if(k<=1) return 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            pro*=nums[i];
            while(pro>=k){
                pro/=nums[l];
                l++;
            }
            count+=(i-l+1);
        } 
        return count;
    }
};