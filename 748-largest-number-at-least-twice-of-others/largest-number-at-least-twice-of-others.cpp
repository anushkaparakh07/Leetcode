class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = nums[0];
        int index = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                largest = nums[i];
                index  = i; 
            };
        }
        for(int i=0;i<nums.size();i++){
            if(largest < 2*nums[i] && i!=index) return -1;
        }
        return index;
    }
};