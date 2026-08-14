class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' and s[i]<='9'){
                if(!st.empty()) st.pop();
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};