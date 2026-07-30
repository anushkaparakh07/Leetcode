class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        int n = nums.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};