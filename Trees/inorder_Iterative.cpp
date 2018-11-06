// Given a binary tree, return the inorder traversal of its nodes’ values.

// Example :
// Given binary tree

//    1
//     \
//      2
//     /
//    3
// return [1,3,2].

// Using recursion is not allowed.

vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> inorder = {};
    if(A==NULL){
        return {};
    }
    
    stack<TreeNode*> s;
    s.push(A);
    
    while(!s.empty()){
        TreeNode* temp = s.top();
        if(temp->left==NULL && temp->right==NULL){
            inorder.push_back(temp->val);
            s.pop();
        }
        else{
            s.pop();
            if(temp->right!=NULL){
                s.push(temp->right);
            }
            s.push(temp);
            if(temp->left!=NULL){
                s.push(temp->left);
            }
            temp->left=NULL;
            temp->right=NULL;
        }
        
    }
    
    return inorder;
}
