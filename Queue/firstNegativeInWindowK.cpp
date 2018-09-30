// Given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. The next line contains n space separated integers forming the array. The last line contains the window size k.

// Output:
// Print the space separated negative integer starting from the first till the end for every window size k. If a window does not contain a negative integer , then print 0 for that window.

// Constraints:
// 1<=T<=10^5
// 1<=n<=10^5
// 1<=a[i]<=10^5
// 1<=k<=n

// Example:
// Input:
// 2
// 5
// -8 2 3 -6 10
// 2
// 8
// 12 -1 -7 8 -15 30 16 28
// 3

// Output:
// -8 0 -6 -6
// -1 -1 -7 -15 -15 0

#include <iostream>
#include <queue>
using namespace std;

void firstNeg(int* arr,int n,int k){
    queue<int> q;
    // first window
    int i;
    for(i=0;i<k;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    
    // cout << q.front();
    
    for(;i<n;i++){
        if(!q.empty()){
            cout << arr[q.front()] <<" ";
        }
        if(q.empty()){
            cout <<"0 ";
        }
        while(!q.empty() && q.front()<(i-k+1)){
            q.pop();
        }
        if(arr[i]<0){
            q.push(i);
        }
    }
    
    // last window
    if(!q.empty()){
        cout << arr[q.front()] <<"\n";
    }
    else{
        cout <<"0\n";
    }
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin >> n;
	    int* arr = new int[n];
	    for(int j=0;j<n;j++){
	        cin >> arr[j];
	    }
	    cin >> k;
	    firstNeg(arr,n,k);
	    
	}
	return 0;
}