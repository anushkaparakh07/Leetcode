class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        for(int i=1;;i++){
            bool isMissing = true;
            for(int j=0;j<arr.size();j++){
                if(i==arr[j]){
                    isMissing = false;
                    break;
                }
            }
            if(isMissing){
                ans.push_back(i);
            }
            if(ans.size()==k) return ans[k-1];
        }
        return -1;
    }
};