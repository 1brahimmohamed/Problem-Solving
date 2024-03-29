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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;

        int sum = 0;
        return pathsum(root, sum, targetSum);
    }

    bool pathsum(TreeNode* node, int sum, const int targetSum){

        sum += node->val;

        if (node->left == nullptr && node->right == nullptr){
            if (sum == targetSum)
                return true;
            else
                return false;
        }

        if(node->left != nullptr){
            bool left = pathsum(node->left, sum, targetSum);
            if (left) return true;
        }
        
        
        if(node->right != nullptr){
            bool right = pathsum(node->right, sum, targetSum);
            if (right) return true;
        }
        
        return false;
    }
};
