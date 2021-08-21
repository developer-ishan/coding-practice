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
    bool isSameTree(TreeNode* a, TreeNode* b) {
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({a, b});
        while(!q.empty()){
            TreeNode *n1 = q.front().first;
            TreeNode *n2 = q.front().second;
            q.pop();
            
            if(
                n1->val!=n2->val||
                (n1->left==NULL && n2->left!=NULL)||
                (n1->left!=NULL && n2->left==NULL)||
                (n1->right==NULL && n2->right!=NULL)||
                (n1->right!=NULL && n2->right==NULL)
            )
                return false;
            if(n1->left){
                q->push({n1->left, n2->left});
            }
            if(n1->right){
                q->push({n1->right, n2->right});
            }
            
        }
        return true;
    }
};