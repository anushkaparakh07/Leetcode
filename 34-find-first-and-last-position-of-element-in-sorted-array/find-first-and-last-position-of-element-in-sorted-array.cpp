class Solution {
public:
    int f(vector<int>& nums, int target){
        int n = nums.size();
        int low=0,high=n-1;
        int first = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==target){
                first = mid;
                high = mid-1;
            }
            else if(target>nums[mid]){
                low = mid+1;
            } 
            else{
                high = mid-1;
            }
        }
        return first;
    }
    int l(vector<int>& nums, int target){
        int n = nums.size();
        int low=0,high=n-1;
        int last = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==target){
                last = mid;
                low = mid+1;
            }
            else if(target>nums[mid]){
                low = mid+1;
            } 
            else{
                high = mid-1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_occ = f(nums,target);
        int last_occ = l(nums,target);
        if(first_occ==-1) return {-1,-1};
        return {first_occ,last_occ};
    }
};