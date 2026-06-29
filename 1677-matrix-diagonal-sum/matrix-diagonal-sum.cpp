class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n = mat.size();
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
        }
        for(int i=0;i<n;i++){
            if(n%2==1 && i==n/2) continue;
            sum+=mat[i][n-i-1];
        }
        return sum;
    }
};