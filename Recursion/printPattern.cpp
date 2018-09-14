// Submissions: 5954   Accuracy: 58.01%   Difficulty: Easy
         
// Print a sequence of numbers starting with N, without using loop, in which  A[i+1] = A[i] - 5,  if  A[i]>0, else A[i+1]=A[i] + 5  repeat it until A[i]=N.

// Input:
// The first line contains an integer T, number of test cases. Then following T lines contains an integer N.

// Output:
// For each test case, print the pattern in newline with space separated integers.

// Constraints:
// 0< N < 10000

// Example:
// Input:
// 2
// 16
// 10
// Output: 
// 16 11 6 1 -4 1 6 11 16
// 10 5 0 5 10

// Explanation:
// We basically first reduce 5 one by one until we reach a negative or 0. After we reach 0 or negative, we one by one add 5 until we reach N.

#include <iostream>
using namespace std;
void seq(int n){
    
    if(n<=5){
        cout << n <<" "<<n-5<<" "<< n<<" ";
        return;
    }
    else{
        cout << n <<" ";
        seq(n-5);
        cout << n <<" ";
        return;
    }
    
}


int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    seq(n);
	    cout <<"\n";
	}
	return 0;
}