class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = 0;
        for(int i=0;i<nums.size();i++){
            eleSum+=nums[i];
        } 
        int digSum=0;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            while(n>0){
                int last=n%10;
                digSum+=last;
                n/=10;
            }
        }
        return abs(eleSum-digSum);
    }
};