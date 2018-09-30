// Given a number n, Write a program that generates and prints all binary numbers with decimal values from 1 to n.

// Input:

// The first line of input contains an integer T denoting the number of test cases.
// The first line of each test case is N.

// Output:

// Print all binary numbers with decimal values from 1 to n in a single line.

// Constraints:

// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 500

// Example:

// Input
// 2
// 2
// 5

// Output
// 1 10
// 1 10 11 100 101

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printBinary(int n){
    queue<string> q;
    q.push("1");
    while(n--){
        string s1 = q.front();
        q.pop();
        cout << s1 <<" ";
        string s2 = s1;
        s2.append("0");
        q.push(s2);
        s1.append("1");
        q.push(s1);
    }
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    printBinary(n);
	    cout <<"\n";
	}
	return 0;
}