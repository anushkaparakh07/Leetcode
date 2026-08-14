class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>vec;
        for(int i=0;i<prices.size();i++){
            bool isDiscount = false;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j] <= prices[i]){
                    vec.push_back(prices[i] - prices[j]);
                    isDiscount = true;
                    break;
                }
            }
        if(!isDiscount){
            vec.push_back(prices[i]);
        }
        }
        return vec;
    }
};