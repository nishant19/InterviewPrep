// Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

// Example:

// Given n = 3,

// You should return the following matrix:

// [
//   [ 1, 2, 3 ],
//   [ 8, 9, 4 ],
//   [ 7, 6, 5 ]
// ]

vector<vector<int> > Solution::generateMatrix(int A) {
    
    if(A==0){
        return {};
    }
    vector<vector<int>> spiral(A,vector<int>(A));
    int top = 0;
    int left = 0;
    int right = A-1;
    int bottom = A-1;
    int number = 1;
    
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            spiral[top][i] = number;
            number++;
        }
        top++;
        
        if(top>bottom){
            break;
        }
        
        for(int i=top;i<=bottom;i++){
            spiral[i][right] = number;
            number++;
        }
        right--;
        
        if(right<left){
            break;
        }
        
        for(int i=right;i>=left;i--){
            spiral[bottom][i] = number;
            number++;
        }
        bottom--;
        
        if(top>bottom){
            break;
        }
        
        for(int i=bottom;i>=top;i--){
            spiral[i][left] = number;
            number++;
        }
        left++;
        
        if(left>right){
            break;
        }
    }
    return spiral;
}
