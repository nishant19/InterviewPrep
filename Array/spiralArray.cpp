// Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

// Example:

// Given the following matrix:

// [
//     [ 1, 2, 3 ],
//     [ 4, 5, 6 ],
//     [ 7, 8, 9 ]
// ]
// You should return

// [1, 2, 3, 6, 9, 8, 7, 4, 5]

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> spiral = {};
    int top = 0;
    int left = 0;
    int bottom = A.size()-1;
    int right = A[0].size()-1;
    
    
    while(top<=bottom && left<=right){
    
        for(int i=left;i<=right;i++){
            spiral.push_back(A[top][i]);
            // cout << A[top][i] << " ";
        }
        top++;
        
        if(top>bottom){
            break;
        }
    
    
        for(int i=top;i<=bottom;i++){
            spiral.push_back(A[i][right]);
            // cout << A[i][right] <<" ";
        }
        right--;
        
        if(left>right){
            break;
        }
    
    
        for(int i=right;i>=left;i--){
            spiral.push_back(A[bottom][i]);
            // cout << A[bottom][i] <<" ";
            
        }
        bottom--;
        
        if(bottom<top){
            break;
        }
    
    
        for(int i=bottom;i>=top;i--){
            spiral.push_back(A[i][left]);
            // cout << A[i][left] <<" ";
            
            
        }
        left++;
        
        if(left>right){
            break;
        }
    }
    
    return spiral;
    
    
}
