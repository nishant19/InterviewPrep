// Given an array of N positive integers. Your task is to find the GCD of all numbers of the array.

// Input:
// First line of input contains number of test cases T. First line of test case contains a positive integer N, size of the array. Next line contains the array elements.

// Output:
// For each testcase, print the GCD of array elements.

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 106
// 1 <= Arr[i] <= 106

// Example:
// Input:
// 1
// 2
// 5 10

// Output:
// 5

#include <iostream>
using namespace std;

int gcd(int a,int b){
    int greater = max(a,b);
    if(greater!=a){
        swap(a,b);
    }
    if(a%b==0){
        return b;
    }
    return (b,a%b);
    
}

int ans(int* arr,int n){
    if(n==1){
        return arr[0];
    }
    int overall = gcd(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        overall = gcd(arr[i],overall);
    }
    return overall;
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    int* arr = new int[n];
	    for(int j=0;j<n;j++){
	        cin >> arr[j];
	    }
	    cout << ans(arr,n) <<"\n";
	}
	return 0;
}