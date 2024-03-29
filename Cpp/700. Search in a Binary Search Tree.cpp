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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr)
            return root;
        
        return BinarySearch(root, val);
    }

    TreeNode* BinarySearch(TreeNode* node, int val){
        if(node == nullptr){
            return nullptr;
        }

        if (node->val == val)
            return node;
        
        if(val > node->val)
            return BinarySearch(node->right, val);
        else
            return BinarySearch(node->left, val);


    }
};
