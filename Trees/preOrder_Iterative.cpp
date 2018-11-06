// Given a binary tree, return the preorder traversal of its nodes’ values.

// Example :
// Given binary tree

//    1
//     \
//      2
//     /
//    3
// return [1,2,3].

// Using recursion is not allowed.

#include <stack>
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> preorder = {};
    stack<TreeNode*> s;
    
    if(A==NULL){
        return {};
    }
    s.push(A);
    
    while(!s.empty()){
        TreeNode* temp = s.top();
        preorder.push_back(temp->val);
        s.pop();
        if(temp->right!=NULL){
            s.push(temp->right);
        }
        if(temp->left!=NULL){
            s.push(temp->left);
        }
        
    }
    
    
    return preorder;
}