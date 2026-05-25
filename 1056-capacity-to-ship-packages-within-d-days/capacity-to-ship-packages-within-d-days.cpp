int arraySum(vector<int>& weights){
    int sum=0;
    for(int i=0;i<weights.size();i++){
        sum+=weights[i];
    }
    return sum;
}
int maxEle(vector<int>& weights){
    int maxi = INT_MIN;
    for(int i=0;i<weights.size();i++){
        maxi = max(maxi,weights[i]);
    }
    return maxi;
}
int func(vector<int>& weights, int cap){
    int days = 1 , load=0;
    for(int i=0;i<weights.size();i++){
        if(load+weights[i]>cap){
            days = days+1;
            load = weights[i];
        }else{
            load+=weights[i];
        }
    }
    return days;
}
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxEle(weights) , high = arraySum(weights);
        int ans = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(func(weights,mid)<=days){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};