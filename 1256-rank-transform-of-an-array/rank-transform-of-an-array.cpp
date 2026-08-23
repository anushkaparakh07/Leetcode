class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp = arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int>mpp;
        int rank = 1;
        for(int i=0;i<temp.size();i++){
            if(mpp.find(temp[i])==mpp.end()){
                mpp[temp[i]] = rank;
                rank++;
            }
        }
        vector<int>ans;
        for(int num:arr){
            ans.push_back(mpp[num]);
        }
        return ans;
    }
};