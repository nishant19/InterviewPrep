// Submissions: 10647   Accuracy: 50%   Difficulty: Easy
            
// Given a Binary Tree, find the maximum width of it.  Maximum width is maximum number of nodes in any level.  For example, maximum width of following tree is 4 as there are 4 nodes at 3rd level

//           1
//        /     \
//      2        3
//    /    \    /    \
//   4    5   6    7
//     \
//       8

            

// Input:
// The task is to complete the method that takes root of tree as an argument.

// There are multiple test cases. For each test case, this method will be called individually.

// Output:
// The function should return maximum width of tree.

// Constraints:
// 1 <=T<= 30
// 1 <= Size of arrays <= 100
// 1 <= Values in arrays <= 1000

// Example:
// Input:
// 2
// 2
// 1 2 R 1 3 L
// 4
// 10 20 L 10 30 R 20 40 L 20 60 R
 

// Output:
// 2
// 2

int getMaxWidth(Node* root)
{
    if(root==NULL){
        return 0;
    }
    int max = INT_MIN;
    vector<Node*> q;
    q.push_back(root);
    while(!q.empty()){
        int size = q.size();
        if(size>max){
            max = size;
        }
        for(int i=0;i<size;i++){
            Node* front = q[0];
            if(front->left!=NULL){
                q.push_back((front->left));
            }
            if(front->right!=NULL){
                q.push_back((front->right));
            }
            q.erase(q.begin());
        }
        
    }
    
    return max;
   
}
