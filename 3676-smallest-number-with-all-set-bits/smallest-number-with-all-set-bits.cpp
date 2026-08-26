class Solution {
public:
    int smallestNumber(int n) {
        bool setBits = false;
        for(int x = n;;x++){
            int nums = x;
            while(nums>0){
            if(nums&1) setBits = true;
            else{
                setBits = false;
                break;
            }
            nums=nums>>1;
            }
            if(setBits) return x;
        }      
        return -1;
    }
};