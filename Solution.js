
/**
 * @param {TreeNode} root
 * @return {string}
 */
var tree2str = function (root) {
    if (root === null) {
        return "";
    }
    let left = (root.left !== null) ? "(" + tree2str(root.left) + ")" : (root.right !== null) ? "()" : "";
    let right = (root.right !== null) ? "(" + tree2str(root.right) + ")" : "";
    return root.val + left + right;
};

/*
 Function TreeNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}
