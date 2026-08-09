class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>numbers;
        string numStr="";
        for(int i=0;i<s.size();i++){
          if(isdigit(s[i])){
            numStr+=s[i];
          }  
          else if(!numStr.empty()){
            int n = stoi(numStr);
            numbers.push_back(n);
            numStr.clear();
          }
        } 
        if(!numStr.empty()){
            numbers.push_back(stoi(numStr));
        }
        bool sorted = false;  
        for(int i=1;i<numbers.size();i++){
            if(numbers[i]>numbers[i-1]){
                sorted = true;
            }else{
                sorted = false;
                break;
            }
        }
        return sorted;
    }
};