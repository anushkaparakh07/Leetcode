class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>vec;
        for(int i=left;i<=right;i++){
            int n = i;
            bool isValid = true;
            while(n>0){
                int last = n%10;
                if(last==0 || i%last!=0){
                    isValid = false;
                    break;
                }
                n/=10;
            }
            if (isValid) {
                vec.push_back(i);
            }
        }
        return vec;
    }
};