// Given an array of positive integers. Reverse every sub-array of K group elements.

// Input:
// The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines of input. The first line of each test case consists of an integer N(size of array) and an integer K separated by a space. The second line of each test case contains N space separated integers denoting the array elements.

// Output:
// For test case, print the modified array.

// Constraints:
// 1 ≤ T ≤ 200
// 1 ≤ N ≤ 107
// 1 ≤ A[i] ≤ 1018

// Example:
// Input
// 1
// 5 3
// 1 2 3 4 5

// Output
// 3 2 1 5 4

#include <iostream>
using namespace std;

void printArray(int* arr,int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout <<"\n";
}

void reverse(int* &arr,int start,int end,int n){
    if(end>n-1){
        end = n-1;
    }
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    
}

void reverseK(int* &arr,int n,int k){
    int groups;
    if(n%k==0){
        groups = n/k;
    }
    else{
        groups = n/k+1;
    }
    
    int startIndex = 0;
    int endIndex = k-1;
    for(int i=0;i<groups;i++){
        reverse(arr,startIndex,endIndex,n);
        startIndex+=k;
        endIndex+=k;
    }
    
}



int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin >> n >> k;
	    int* arr = new int[n];
	    for(int j=0;j<n;j++){
	        cin >> arr[j];
	    }
	    reverseK(arr,n,k);
	    printArray(arr,n);
	}
	return 0;
}