class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minValue = nums[0];
        int maxValue = nums[0];
        for(int i=0;i<nums.size();i++){
            minValue = min(minValue,nums[i]);
            maxValue = max(maxValue,nums[i]);
        } 
        while(minValue>0 && maxValue>0){
            if(minValue>maxValue) minValue=minValue % maxValue;
            else maxValue = maxValue % minValue;
        }
        if(minValue==0) return maxValue;
        return minValue;
    }
};