// The problem is to count all the possible paths from top left to bottom right of a  MxN matrix with the constraints that from each cell you can either move to right or down.

// Input:
// The first line of input contains an integer T, denoting the number of test cases.
// The first line of each test case is M and N, M is number of rows and N is number of columns.

// Output:
// For each test case, print the number of paths.

// Constraints:

// 1 ≤ T ≤ 30
// 1 ≤ M,N ≤ 10

// Example:
// Input
// 2
// 3 3
// 2 8
// Output
// 6
// 8
//  

#include <iostream>
using namespace std;

int paths(int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    int path[m+1][n+1];
    
    path[1][1] = 1;
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1){
                path[i][j] = 1;
            }
            else{
                path[i][j] = path[i-1][j] + path[i][j-1];
            }
            
        }
    }
    return path[m][n];
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int m,n;
	    cin >> m >>n ;
	    cout << paths(m,n) <<"\n";
	}
	return 0;
}