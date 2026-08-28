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
    vector<int> largestValues(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root == nullptr) return {};
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
         vector<int>result;
            for (int i = 0; i < ans.size(); i++) {
                int largest = INT_MIN;
                for (int j = 0; j < ans[i].size(); j++) {
                    largest = max(ans[i][j],largest);
                }
                result.push_back(largest);
            }
        return result;
    }
};