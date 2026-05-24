int maxElement(vector<int>& nums){
    int maxi = INT_MIN;
    for(int i=0;i<nums.size();i++){
        maxi = max(nums[i],maxi);
    }
    return maxi;
}
long long totaldivisors(vector<int>& nums, int divisor){
    long long totaldivisor = 0;
    for(int i=0;i<nums.size();i++){
        totaldivisor+=ceil((double)nums[i]/(double)divisor);
    }
    return totaldivisor;
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int l = 1,high = maxElement(nums);  
        int ans = INT_MAX;
        while(l<=high){
            int mid = l + (high - l) / 2;
            if(totaldivisors(nums,mid)<=threshold){
                ans = mid;
                high = mid-1;
            }else{
                l=mid+1;
            }
        }  
        return ans;
    }
};