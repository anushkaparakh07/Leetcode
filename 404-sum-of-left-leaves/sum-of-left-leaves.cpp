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
    void leftleaf(TreeNode* root, int& sum){
       if (root == nullptr) return;
       if(root->left != nullptr &&
          root->left->right ==nullptr &&
          root->left->left ==nullptr
       ){
        sum += root->left->val;
       }
       leftleaf(root->left,sum);
       leftleaf(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
       int sum = 0;
       leftleaf(root,sum);
       return sum;
    }
};