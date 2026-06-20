class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for(int s=0;s<k;s++){
            sum+=nums[s];
        }
        double maximum = sum/k;
        for(int i=k;i<n;i++){
            sum = sum-nums[i-k]+nums[i];
            maximum = max(maximum,sum/k);
        }
        return maximum;
    }
};