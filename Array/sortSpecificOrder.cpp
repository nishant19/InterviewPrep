// Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. The next line contains N space separated values of the array.

// Output:
// For each test case in a new line print the space separated values of the modified array.

// Constraints:
// 1 <= T <= 103
// 1 <= N <= 107
// 0 <= Ai <= 1018

// Example:
// Input:
// 2
// 7
// 1 2 3 5 4 7 10
// 7
// 0 4 5 3 7 2 1

// Output:
// 7 5 3 1 2 4 10
// 7 5 3 1 0 2 4

// Explanation:
// Testcase1: Array elements 7 5 3 1 are odd and sorted in descending order, whereas 2 4 10 are even numbers and sorted in ascending order.

#include <iostream>
#include <algorithm>
using namespace std;

void printArray(long long int* arr,int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << "\n";
}

bool myFunc(long long int i,long long int j){
    return (i>j);
}

void specificSort(long long int* &arr,int n){
    int currentOdd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            swap(arr[currentOdd],arr[i]);
            currentOdd++;
        }
    }
    // cout << currentOdd <<"\n";
    sort(arr,arr+currentOdd,greater<long long int>());
    sort(arr+currentOdd,arr+n);
}



int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    long long int* arr = new long long int[n];
	    for(int j=0;j<n;j++){
	        cin >> arr[j];
	    }
	    specificSort(arr,n);
	    printArray(arr,n);
	}
	return 0;
}