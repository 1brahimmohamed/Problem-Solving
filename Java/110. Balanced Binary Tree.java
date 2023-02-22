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
    public boolean isBalanced(TreeNode root) {
        if (root == null)
            return true;
        
        int leftChild = getHeight(root.left);
        int rightChild = getHeight(root.right);

        if(Math.abs(leftChild - rightChild) > 1)
            return false;
        
        return isBalanced(root.left) && isBalanced(root.right);

    }
    private static int getHeight(TreeNode node){
        if(node == null) return 1;
        return Math.max(getHeight(node.left), getHeight(node.right)) + 1;
    }
}
