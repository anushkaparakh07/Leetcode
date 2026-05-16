class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      map<int,int>mpp;
      set<int>st;
      for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
      }
      for(auto it:mpp){
        st.insert(it.second);
      }
      if(st.size()==mpp.size()) return true;
    return false;
    }
};