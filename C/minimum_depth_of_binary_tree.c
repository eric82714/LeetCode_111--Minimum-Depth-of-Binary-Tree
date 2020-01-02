/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if(!root) return 0;
        
    if(!root->left && !root->right) return 1;
        
    if(root->left && !root->right) return 1 + minDepth(root->left);
        
    if(!root->left && root->right) return 1 + minDepth(root->right);

    return 1 + (int)fmin(minDepth(root->left), minDepth(root->right));
}
