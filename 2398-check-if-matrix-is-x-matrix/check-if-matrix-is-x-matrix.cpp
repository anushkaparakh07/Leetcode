class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][i]==0) return false;
        }
        for(int i=0;i<n;i++){
            if(grid[i][n-i-1]==0) return false;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i!=j && i!=n-j-1 && grid[i][j]!=0) return false;
            }
        }
        return true;
    }
};