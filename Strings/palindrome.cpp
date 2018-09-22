// Given a string s check if it is palindrome or not.

// Input:
// The first line contains 'T' denoting the number of test cases. Then follows description of test cases.
// Each case begins with a single integer N denoting the length of string. The next line contains the string s.


// Output:
// Print "Yes" if it is a palindrome else "No". (Without the double quotes)


// Constraints:
// 1<=T<=30
// 1<=N<=100


// Example:
// Input:
// 1
// 4
// abba

// Output:
// Yes

#include <iostream>
using namespace std;

string palindrome(string s){
    int start=0;
    int end = s.length()-1;
    while(start<=end){
        if(s[start++]!=s[end--]){
            return "No";
        }
    }
    return "Yes";
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    cout << palindrome(s) <<"\n";
	}
	return 0;
}