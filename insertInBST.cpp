// question link : https: //leetcode.com/problems/insert-into-a-binary-search-tree/

class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int K)
    {
        if (root == NULL)
        {
            TreeNode *temp = new TreeNode(K);
            root = temp;
            return root;
        }
        if (root->val == K)
            return root;

        if (root->val > K)
            root->left = insertIntoBST(root->left, K);
        else
            root->right = insertIntoBST(root->right, K);

        return root;
    }
};