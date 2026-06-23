class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxiDiff = -1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    int diff = nums[j] - nums[i];
                    maxiDiff = max(maxiDiff,diff);
                }
            }
        }
        return maxiDiff;
    }
};