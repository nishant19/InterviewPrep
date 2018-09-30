// Given an array of digits (values are from 0 to 9), find the minimum possible sum of two numbers formed from digits of the array. All digits of given array must be used to form the two numbers.

// Input:

// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Next line of each test contains N space seperated integers denoting the elements of the array.
// Output:

// For each test case output a single line containing the required sum.
// Constraints:

// 1<=T<=100
// 1<=N<=50
// Example:

// Input

// 2
// 6
// 6 8 4 5 2 3
// 5
// 5 3 0 7 4

// Output

// 604
// 82

// Explanation:

// Test Case 1-

// The minimum sum is formed by numbers 
// 358 and 246
// Test Case 2 -

// The minimum sum is formed by numbers 
// 35 and 047

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSum(int* arr,int n){
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
    }
    string a = "";
    string b = "";
    while(!q.empty()){
        a = to_string(q.top()) + a;
        q.pop();
        if(!q.empty()){
            b = to_string(q.top()) + b;
            q.pop();
        }
        
    }
    
    int aa = stoi(a);
    int bb = stoi(b);
    return aa + bb;
    
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
	    cout << minSum(arr,n) <<"\n";
	}
	return 0;
}