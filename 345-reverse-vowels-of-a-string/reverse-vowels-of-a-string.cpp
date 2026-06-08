class Solution {
public:
    bool isVowel(char ch) {
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
    }
    string reverseVowels(string s){
       string vowel;
       for(char ch:s){
        if(isVowel(ch)){
            vowel.push_back(ch);
        }
       } 
       reverse(vowel.begin(),vowel.end());
       int index = 0;
       for(int i=0;i<s.size();i++){
        if(isVowel(s[i])){
            s[i] = vowel[index];
            index++;
        }
       }
       return s;
    }
};