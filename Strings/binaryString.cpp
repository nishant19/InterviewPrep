// Given a binary string, count number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.
 

// Input:

// The first line of input contains an integer T denoting the number of test cases.
// Each test case consist of an integer 'n' denoting the string length and next line is followed by a binary string .


// Output:

// Print the number of substring starting and ending with 1 in a separate line.

// Constraints:

// 1 ≤ T ≤ 40
// 1 ≤ |s| ≤ 1000


// Example:

// Input:
// 1
// 4
// 1111
// Output:
// 6

#include <iostream>
using namespace std;

int startEnd(string str){
    long long int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            count++;
        }
    }
    return count*(count-1)/2;
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    cout << startEnd(s);
	    cout <<"\n";
	}
	return 0;
}