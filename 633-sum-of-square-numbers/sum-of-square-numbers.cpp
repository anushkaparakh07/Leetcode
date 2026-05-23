class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int l = 0 , h = sqrt(c);
        while(l<=h){
            if((l*l)+(h*h)==c){
                return true;
            }
            else if((l*l)+(h*h)>c){
                h--;
            }
            else{
                l++;
            }
        }
        return false;
    }
};