// Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')', find out the length of the longest valid substring.

// NOTE: Length of smallest the valid substring ( ) is 2.

 

// Input
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
// The first line of each test case contains a string S consisting only of ( and ).


// Output

// Print out the length of the longest valid substring.

// Constraints
// 1 <= T <= 100
// 0 <   S  <= 110

 

// Examples 

// Input
// 4
// (()(
// ()()((
// ((()()())))
// ()(())(

// Output
// 2
// 4
// 10
// 6

#include <iostream>
#include <stack>
using namespace std;

int validSubstringLength(string str){
    stack<int> s;
    s.push(-1);
    int i=0;
    int max = 0;
    while(i<str.length()){
        if(str[i]=='('){
            s.push(i);
        }
        else{
            s.pop();
            if(!s.empty()){
                int current = i-s.top();
                if(max<current){
                    max = current;
                }
            }
            else{
                s.push(i);
            }
        }
        i++;
    }
    return max;
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    string s;
	    cin >> s;
	    cout << validSubstringLength(s) <<"\n";
	}
	return 0;
}