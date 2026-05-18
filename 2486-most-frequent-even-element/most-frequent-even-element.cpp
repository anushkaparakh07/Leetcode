class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxFre = 0 , maxEle = -1;
        for(auto it:mpp){
            if((it.second>maxFre) && (it.first%2==0)){
                maxFre = it.second;
                maxEle = it.first;
            }
        }
        return maxEle;
    }
};