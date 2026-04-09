class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        // If both null → same tree
        if (!p && !q) return true;

        // If one null → not same
        if (!p || !q) return false;

        queue<TreeNode*> qp;
        queue<TreeNode*> qq;

        qp.push(p);
        qq.push(q);

        while (!qp.empty() && !qq.empty())
        {
            TreeNode* n1 = qp.front(); qp.pop();
            TreeNode* n2 = qq.front(); qq.pop();

            // Value mismatch
            if (n1->val != n2->val) return false;

            // LEFT children mismatch
            if ((n1->left == nullptr) != (n2->left == nullptr)) return false;

            // If both left exist → push both
            if (n1->left && n2->left) {
                qp.push(n1->left);
                qq.push(n2->left);
            }

            // RIGHT children mismatch
            if ((n1->right == nullptr) != (n2->right == nullptr)) return false;

            // If both right exist → push both
            if (n1->right && n2->right) {
                qp.push(n1->right);
                qq.push(n2->right);
            }
        }

        // Both queues must end together
        return qp.empty() && qq.empty();
    }
};