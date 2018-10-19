// Submissions: 12848   Accuracy: 29.28%   Difficulty: Medium
        
// There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

// Input:
// The first line contains an integer 'T' denoting the total number of test cases. In each test cases, an integer N will be given.


// Output:
// Print number of possible ways to reach Nth stair. Answer your output % 10^9+7.


// Constraints:
// 1<=T<=105
// 1<=N<=105

// Example:
// Input:
// 3
// 4
// 10
// 24
// Output:
// 5
// 89
// 75025

#include <iostream>
#include <math.h>
using namespace std;

long long int* stairs(int n){
    
    // if(n<=0){
    //     return 0;
    // }
    
    long long int* arr = new long long int[n+1];
    arr[1] = 1;
    arr[0] = 1;
    
    long long int mod = pow(10,9)+7;
    
    for(int i=2;i<=n;i++){
        arr[i] = (arr[i-1] + arr[i-2])%mod;
    }
    return arr[n];
}

int main() {
	int t;
	long long int* ans  = stairs(pow(10,5));
	cin >> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    if(n<=0){
	        cout << 0<<"\n";
	    }
	    else{
	        cout << ans[n]<<"\n";
	    }
	    
	}
	return 0;
}