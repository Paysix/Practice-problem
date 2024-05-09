// leetcode 99 - Recover Binary Search Tree
// The problem give a broken BST and we need to fix it.
// Example: 
//     1                     3
//    /                     /
//   /                     /
//  3          ==>        1
//   \                     \
//    \                     \
//     2                     2
// If we see the tree in inorder like '3 2 1.' We just need to swap '1' and '3.'
// The first mistake is '3' bigger than '2' when '2' is root. The pre-node is a mistake.
// The second mistake is '2' bigger than '1' when '1' is root. The root is a mistake.
// Using two TreeNode 'first' and 'second' to mark the mistake.
// Swapping the two mistake can fix the BST.

class Solution {
    TreeNode* first = NULL;
    TreeNode* second = NULL;
    TreeNode* pre = NULL;
public:
    void recoverTree(TreeNode* root) {
        if (!root) return;
        helper(root);
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
    }

    void helper(TreeNode* root) {
        if (!root) return;
        helper(root->left);
        if (pre != NULL && pre->val >= root->val) {
            if (!first) first = pre;
            second = root;
        }
        pre = root;
        helper(root->right);
    }
};
