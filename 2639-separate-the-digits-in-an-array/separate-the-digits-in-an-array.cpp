class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>answer;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            int j = nums[i];
            int rev = 0;
            while(j>0){
                int last = j%10; 
                temp.push_back(last);
                j/=10;
            }
            reverse(temp.begin(),temp.end());
            for(int d : temp){
                answer.push_back(d);
            }
        }
        return answer;
    }
};