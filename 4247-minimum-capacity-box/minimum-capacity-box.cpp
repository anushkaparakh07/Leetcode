class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mini = INT_MAX;
        int index = -1;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize){
                mini = min(mini,capacity[i]);
            }
        }
        for(int i=0;i<capacity.size();i++){
            if(mini==capacity[i]) return i;
        }
        return -1;
    }
};