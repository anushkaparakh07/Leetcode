class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>lSum;
        vector<int>rSum;
        vector<int>ans;
        int n = nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int leftSum=0;
        for(int i=0;i<n;i++){
            int rightSum = total - leftSum - nums[i];
            rSum.push_back(rightSum);
            lSum.push_back(leftSum);
            leftSum+=nums[i];
        }
        for(int i=0;i<n;i++){
            ans.push_back(abs(lSum[i]-rSum[i]));
        }
        return ans;
    }
};