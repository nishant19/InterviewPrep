// One day Chinky was roaming around the park and suddenly she found N bags with diamonds.
// The i'th of these bags contains Ai diamonds. She felt greedy and started to pick up the bag very fastly. But due to quick movement, she drops it on the ground. But as soon as she drops the bag, a genie appears in front of her and he increases the number of diamonds in the bag suddenly!
// Now the bag which was used to contain P diamonds(before picking up), now contains [P/2] diamonds, where [p] is the greatest integer less than p. Then genie gave her the time K minutes in which she can take as many as diamonds. In a single minute , she can take all the diamonds in a single bag, regardless the number of diamonds in it. Find the maximum number of diamonds that Chinky can take with her.

// Input:

// First line contains an integer T. T test cases follow.
// First line of each test case contains two space-separated integers N and K.
// Second line of each test case contains N space-separated integers,the number of diamonds in the bags.

// Output:

// Print the answer to each test case in a new line.


// Constraints:

// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 105
// 0 ≤ K ≤ 105
// 0 ≤ Ai ≤105 


// Example:

// Input:                                            
// 1
// 5 3
// 2 1 7 4 2

// Output:
// 14

// Explanation:

// The state of bags is:
// 2 1 7 4 2
// Chinky takes all diamonds from Third bag (7). The state of bags becomes:
// 2 1 3 4 2 
// Chinky takes all diamonds from Fourth bag (4). The state of bags becomes:
// 2 1 3 2 2
// Chinky takes all diamonds from Third bag (3). The state of bags becomes:
// 2 1 1 2 2 
// Hence, the Chinky takes 7+4+3= 14

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int getMax(long long int* &arr,int n){
    long long int max = INT_MIN;
    int maxIndex = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
            maxIndex = i;
        }
    }
    arr[maxIndex]/=2;
    return max;
}

long long int maxDiamonds(long long int* &arr,int n,int k){
    int i=0;
    long long int count = 0;
    while(i<k){
        long long int max = getMax(arr,n);
        // cout << max <<" ";
        count+=max;
        i++;
    }
    return count;
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin >> n >> k;
	    long long int* arr = new long long int[n];
	    for(int j=0;j<n;j++){
	        cin >> arr[j];
	    }
	    cout << maxDiamonds(arr,n,k) <<"\n";
	}
	return 0;
}