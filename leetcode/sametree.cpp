class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(not q and not p) return true;
        if((not p and q) or (not q and p)) return false;
        
        return ((p -> val == q -> val)) && isSameTree(p -> left, q -> left) && isSameTree(p -> right, q -> right);
    }
};
