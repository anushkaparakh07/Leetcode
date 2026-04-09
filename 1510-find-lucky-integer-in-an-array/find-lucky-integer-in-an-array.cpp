class Solution {
public:
    int findLucky(vector<int>& arr) {
      map<int,int>mpp;
      for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
      }  
      for(auto it = mpp.rbegin(); it != mpp.rend(); it++){        
        if(it->first==it->second){
            return it->first;
        }
      }
      return -1;
    }
};