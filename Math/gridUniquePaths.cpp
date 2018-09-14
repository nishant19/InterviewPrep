// A robot is located at the top-left corner of an A x B grid (marked ‘Start’ in the diagram below).

// Path Sum: Example 1

// The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

// How many possible unique paths are there?

// Note: A and B will be such that the resulting answer fits in a 32 bit signed integer.

// Example :

// Input : A = 2, B = 2
// Output : 2

// 2 possible routes : (0, 0) -> (0, 1) -> (1, 1) 
//               OR  : (0, 0) -> (1, 0) -> (1, 1)

//       

int Solution::uniquePaths(int A, int B) {
    
    if(A==0 || B==0){
        return 0;
    }
    
    vector<vector<int>> dp(A+1,vector<int>(B+1));
    
    for(int i=1;i<=A;i++){
        for(int j=1;j<=B;j++){
            if(i==1 || j==1){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    
    return dp[A][B];
}
