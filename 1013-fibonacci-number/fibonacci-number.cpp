class Solution {
public:
int f(int i){
    if(i<=1){
         return i; 
    } 
    int last = f(i-1); 
    int slast = f(i-2); 
    return last+slast;
}
    int fib(int n) {
        return f(n);
    }
};