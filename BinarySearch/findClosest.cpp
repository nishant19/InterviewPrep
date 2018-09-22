// Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

// Note: If the difference is same for two values print the value which is greater than the given number.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

// Output:
// For each test case, print the closest number in new line.

// Constraints:
// 1<=T<=100
// 1<=N<=105
// 1<=K<=105
// 1<=A[i]<=105

// Example:
// Input:
// 2
// 4 4
// 1 3 6 7
// 7 4
// 1 2 3 5 6 8 9

#include <iostream>
using namespace std;

int closest(int* arr,int n,int k){
    
    if(k<arr[0]){
        return arr[0];
    }
    
    if(k>arr[n-1]){
        return arr[n-1];
    }
    
    int start = 0;
    int end = n-1;
    bool ahead;
    
    int mid;
    
    while(start<=end){
        mid = start+(end-start)/2;
        
        if(arr[mid]==k){
            return arr[mid];
        }
        
        else if(k>arr[mid]){
            start = mid+1;
            ahead = true;
        }
        else{
            end = mid-1;
            ahead = false;
        }
    }
    
    int ans;
    
    if(ahead){
        int current = abs(k-arr[mid]);
        int next = abs(k-arr[mid+1]);
        
        ans = ( current > next)?arr[mid+1]:arr[mid];
        if(current==next){
            ans = arr[mid+1];
        }
    }
    
    else{
        int current = abs(k-arr[mid]);
        int prev = abs(k-arr[mid-1]);
        
        ans = ( current > prev)?arr[mid-1]:arr[mid];
        
        if(current==prev){
            ans = arr[mid];
        }
    }
    
    return ans;
    
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
	    cout << closest(arr,n,k) <<"\n";
	}
	return 0;
}