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
    TreeNode* reverseOddLevels(TreeNode* root) {
        vector<vector<TreeNode*>>ans;
        queue<TreeNode*>q;
        if(root == nullptr) return root;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<TreeNode*>level;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node);
                if(node->left !=nullptr) q.push(node->left); 
                if(node->right !=nullptr) q.push(node->right); 
            }
            ans.push_back(level);
        }
        for(int i=1;i<ans.size();i+=2){
            int left = 0;
            int right = ans[i].size()-1;
            while(left<right){
                swap(ans[i][left]->val,ans[i][right]->val);
                left++;
                right--;
            }
        }
        return root;
    }
};