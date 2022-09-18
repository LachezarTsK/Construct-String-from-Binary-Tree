
using namespace std;

/*
Struct TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this struct.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    
public:
    string tree2str(TreeNode* root) {
        if (root == nullptr) {
            return "";
        }
        string left = (root->left != nullptr) ? "(" + tree2str(root->left) + ")" : (root->right != nullptr) ? "()" : "";
        string right = (root->right != nullptr) ? "(" + tree2str(root->right) + ")" : "";
        return to_string(root->val) + left + right;
    }
};
