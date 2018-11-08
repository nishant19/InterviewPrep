// Given a binary tree, return the postorder traversal of its nodes’ values.

// Example :

// Given binary tree

//    1
//     \
//      2
//     /
//    3
// return [3,2,1].

// Using recursion is not allowed.

vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> postorder = {};
    if(A==NULL){
        return {};
    }
    
    stack<TreeNode*> s;
    s.push(A);
    
    while(!s.empty()){
        TreeNode* temp = s.top();
        if(temp->left==NULL && temp->right==NULL){
            postorder.push_back(temp->val);
            s.pop();
        }
        else{
            if(temp->right!=NULL){
                s.push(temp->right);
                temp->right = NULL;
            }
            if(temp->left!=NULL){
                s.push(temp->left);
                temp->left = NULL;
            }
            
        }
    }
    return postorder;
}
