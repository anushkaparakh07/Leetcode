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
    vector<double> averageOfLevels(TreeNode* root) {
     vector<vector<int>>ans;
     queue<TreeNode*>q;
     q.push(root);
     while(!q.empty()){
        vector<int>level;
        int size = q.size();
        for(int i=0;i<size;i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
            level.push_back(node->val);
        }
        ans.push_back(level);
     }
     vector<double>average;
     for(auto row:ans){
        double cnt = 0, sum=0; 
        for(auto val:row){
            sum+=val;
            cnt++;
        }
        average.push_back(sum/cnt);
     }  
     return average; 
    }
};