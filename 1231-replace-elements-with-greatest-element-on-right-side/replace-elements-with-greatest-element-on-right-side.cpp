class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightMax = -1;
        int n = arr.size();
        for(int i=n-1;i>=0;i--){
            int curr = arr[i];
            arr[i] = rightMax;
            rightMax = max(rightMax,curr);
        }
        return arr;
    }
};