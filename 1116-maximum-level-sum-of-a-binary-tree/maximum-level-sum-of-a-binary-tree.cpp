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
    int maxLevelSum(TreeNode* root) {
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
        int largest = INT_MIN;
        int level=0;
        for (int i = 0; i < ans.size(); i++) {
                int sum = 0;
                for (int j = 0; j < ans[i].size(); j++) {
                    sum += ans[i][j];
                }
                if(sum>largest){
                    largest = sum;
                    level = i+1;
                }
        }
        return level;
    }
};