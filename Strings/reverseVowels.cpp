// Given a string, reverse only the vowels present in it and print the resulting string.

// Input: First line of the input file contains an integer T denoting the number of test cases. Then T test cases follow. Each test case has a single line containing a string.

// Output: Corresponding to each test case, output the string with vowels reversed.

// Example:
// Input:
// 4
// geeksforgeeks
// practice
// wannacry
// ransomware

// Output:
// geeksforgeeks
// prectica
// wannacry
// rensamwora

#include <iostream>
using namespace std;

bool isVowel(char &c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}

string reverseVowels(string &s){
    int start = 0;
    int end = s.length()-1;
    
    while(start<=end){
        if(isVowel(s[start]) && isVowel(s[end])){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        else if(!isVowel(s[start])){
            start++;
        }
        else if(!isVowel(s[end])){
            end--;
        }
        else{
            start++;
            end--;
        }
    }
    return s;
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    string s;
	    cin >> s;
	    cout << reverseVowels(s) <<"\n";
	}
	return 0;
}