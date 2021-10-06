public class Solution {
    public bool HasPathSum(TreeNode root, int targetSum) {
        if(root == null) return false;
        
        targetSum -= root.val;
        
        if(root.left == null && root.right == null)
            return targetSum == 0;
        
        bool left = false;
        if(root.left != null)
            left = HasPathSum(root.left, targetSum);
        
        bool right = false;
        if(root.right != null) 
            right = HasPathSum(root.right, targetSum);
        
        return left || right;
        
    }
}
