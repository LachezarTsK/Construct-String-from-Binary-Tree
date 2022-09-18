
public class Solution {

    public String tree2str(TreeNode root) {
        if (root == null) {
            return "";
        }
        String left = (root.left != null) ? "(" + tree2str(root.left) + ")" : (root.right != null) ? "()" : "";
        String right = (root.right != null) ? "(" + tree2str(root.right) + ")" : "";
        return root.val + left + right;
    }
}

/*
Class TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this class.
 */
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
