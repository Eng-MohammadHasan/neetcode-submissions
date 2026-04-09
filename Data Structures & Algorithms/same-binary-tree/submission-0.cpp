class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        // Check root mismatch
        if (!p && !q) return true;
        if (!p || !q) return false;

        queue<TreeNode*> qq;
        qq.push(p);
        qq.push(q);

        while (!qq.empty())
        {
            TreeNode* n1 = qq.front(); qq.pop();
            TreeNode* n2 = qq.front(); qq.pop();

            // Value mismatch
            if (n1->val != n2->val) return false;

            // Left child mismatch
            if ((n1->left == nullptr) != (n2->left == nullptr)) return false;
            if (n1->left && n2->left) {
                qq.push(n1->left);
                qq.push(n2->left);
            }

            // Right child mismatch
            if ((n1->right == nullptr) != (n2->right == nullptr)) return false;
            if (n1->right && n2->right) {
                qq.push(n1->right);
                qq.push(n2->right);
            }
        }

        return true;
    }
};