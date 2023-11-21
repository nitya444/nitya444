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
    /*
    void inorder(TreeNode* root){
        if(root==NULL)
        return;
        
        TreeNode* temp=new TreeNode(root->val);
        
        temp->left=inorder(root->left);
        temp-right=inorder(root->right);
    }
    */
    TreeNode* searchBST(TreeNode* root, int val) {
          if(root==NULL || root->val==val)
              return root;
        
         if(val<root->val)
             return searchBST(root->left,val);
        else
        {
            return searchBST(root->right,val);
        }
    }
};