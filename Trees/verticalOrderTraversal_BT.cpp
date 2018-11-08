// Given a binary tree, print a vertical order traversal of it.

// Example :
// Given binary tree:

//       6
//     /   \
//    3     7
//   / \     \
//  2   5     9
// returns

// [
//     [2],
//     [3],
//     [6 5],
//     [7],
//     [9]
// ]

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    
    if(A==NULL){
        return {};
    }
    
    unordered_map<int,vector<int>> m;
    
    queue<pair<TreeNode*,int> > q;
    q.push(make_pair(A,0));
    int hd = 0;
    
    while(!q.empty()){
        pair<TreeNode*,int> temp = q.front();
        q.pop();
        
        hd = temp.second;
        TreeNode* node = temp.first;
        m[hd].push_back(node->val);
        
        if(node->left!=NULL){
            q.push(make_pair(node->left,hd-1));
        }
        if(node->right!=NULL){
            q.push(make_pair(node->right,hd+1));
        }
    }
    
    int min = INT_MAX;
    int max = INT_MIN;
    
    for(auto it:m){
        if(it.first<min){
            min = it.first;
        }
        if(it.first>max){
            max = it.first;
        }
        // cout << it.first <<" ";
        
    }
    int lefthd = min;
    int righthd = max;
    
    // cout << " " <<min <<" "<< max;
    
    int size = abs(lefthd)+righthd+1;
    vector<vector<int> > v(size);
    
    for(int i=0;i<size;i++){
        v[i] = m[i+lefthd];
    }
    
    return v;
    
    
}
