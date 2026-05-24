int maxElement(vector<int>& piles){
    int maxi = INT_MIN;
    for(int i=0;i<piles.size();i++){
        maxi = max(piles[i],maxi);
    }
    return maxi;
}
long long totalhrs(vector<int>& piles, int hourly){
    long long totalhours = 0;
    for(int i=0;i<piles.size();i++){
        totalhours+=(piles[i] + hourly - 1) / hourly;
    }
    return totalhours;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1,high = maxElement(piles);  
        int ans = INT_MAX;
        while(l<=high){
            int mid = l + (high - l) / 2;
            if(totalhrs(piles,mid)<=h){
                ans = mid;
                high = mid-1;
            }else{
                l=mid+1;
            }
        }  
        return ans;
    }
};