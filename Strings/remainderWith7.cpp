// Given a number as string(n) , your task is to complete the function remainderWith7 which returns an integer which denotes the remainder of the number when its divided by 7. 

// Input:
// The first line of input contains an integer T denoting the no of test cases then T test cases follow . Each test case contains a number represented as string.

// Output:
// For each test case in a new line print the remainder when the number is divided by 7.

// Constraints:
// 1<=T<=100
// 1<=length of n <=300

// Example(To be used only for expected output):
// Input:
// 2
// 5
// 8
// Output:
// 5
// 1

#include <string>
int remainderWith7(string n)
{
    while(n.length()>5){
        string small = n.substr(0,5);
        int num = stoi(small);
    
        int rem = num%7;
    
        n = to_string(rem) + n.substr(5,n.length()-5);
    }
    
    int num = stoi(n);
    return num%7;
    
}