class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       vector<int>v(nums.size()+1,0);
       vector<int>vec;
       for(int i=0;i<nums.size();i++){
        v[nums[i]]++;
       }
       for(int i=1;i<=nums.size();i++){
        if(v[i]==0){
            vec.push_back(i);
        }
       } 
       return vec;
    }
};