class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int high = 0 , low = nums.size()-1; 
        int mid = (high+low)/2;
        int ele = nums[mid];    
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.first==ele && it.second==1) return true;
        }
        return false;
    }
};