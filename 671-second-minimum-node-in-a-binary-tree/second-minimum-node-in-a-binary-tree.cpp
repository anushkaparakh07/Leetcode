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
    void sminimum(TreeNode* root,vector<int>&ans){
        if(root==nullptr) return;
        ans.push_back(root->val);
        sminimum(root->left,ans);
        sminimum(root->right,ans);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>ans;
        sminimum(root,ans);
        int smallest = INT_MAX;

for (int i = 0; i < ans.size(); i++) {
    smallest = min(smallest, ans[i]);
}

int ssmallest = INT_MAX;
bool found = false;

for (int i = 0; i < ans.size(); i++) {
    if (ans[i] != smallest && (!found || ans[i] < ssmallest)) {
        ssmallest = ans[i];
        found = true;
    }
}

return found ? ssmallest : -1;
    }
};