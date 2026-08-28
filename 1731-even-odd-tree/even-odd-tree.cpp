/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root == nullptr) return 0;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left !=nullptr) q.push(node->left); 
                if(node->right !=nullptr) q.push(node->right);
                level.push_back(node->val); 
            }
            ans.push_back(level);
        }
        for (int i = 0; i < ans.size(); i++) {
                for (int j = 0; j < ans[i].size(); j++) {
                    if(i%2==0){
                        if(ans[i][j]%2==0){
                            return false;
                        }
                        if(j>0 && ans[i][j]<=ans[i][j-1]){
                            return false;
                        }
                    }
                    else{
                        if(i%2!=0){
                            if(ans[i][j]%2!=0) return false;
                            if(j>0 && ans[i][j]>=ans[i][j-1]) return false;
                        }
                    }
                }
        }
        return true;
    }
};