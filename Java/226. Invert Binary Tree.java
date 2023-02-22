/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode invertTree(TreeNode root) {
        TreeNode result = invert(root);

        return result;
    }

    TreeNode invert(TreeNode node){ 
        if(node == null)
            return node;

        TreeNode left = node.left;
        TreeNode right = node.right;
        node.left = right;
        node.right = left;

        invert(node.left);
        invert(node.right);

        return node;
    }
}
