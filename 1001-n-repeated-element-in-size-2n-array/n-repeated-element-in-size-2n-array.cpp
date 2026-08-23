class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int n = nums.size()/2;
        for(auto it:mpp){
            if(it.second==n){
                return it.first;
            }
        }
        return -1;
    }
};