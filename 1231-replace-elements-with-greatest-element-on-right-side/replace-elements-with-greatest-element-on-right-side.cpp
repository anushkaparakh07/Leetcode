class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        int n = arr.size();
        if(n==1) return {-1};
        for(int i=0;i<n-1;i++){
            int maxi = arr[i+1];
            for(int j=i+1;j<n;j++){
                maxi = max(arr[j],maxi);
            }
            ans.push_back(maxi);
        }
        ans.push_back(-1);
        return ans;
    }
};