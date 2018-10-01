// Submissions: 4508   Accuracy: 41.79%   Difficulty: Basic
         
// Given two strings in lowercase, the task is to make them anagram. The only allowed operation is to remove a character from any string. Find minimum number of characters to be deleted to make both the strings anagram. If two strings contains same data set in any order then strings are called Anagrams.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of 2 strings to make the anagrams.

// Output:
// Output the minimum number of characters to be deleted to make both the strings anagram.

// Constraints:
// 1<=T<=10^5
// 1<=length of string<=10^5

// Example:
// Input:
// 2
// bcadeh
// hea
// cddgk
// gcd

// Output:
// 3
// 2

int remAnagram(string str1, string str2)
{   
    int ans = 0;
    int* count = new int[26];
    for(int i=0;i<26;i++){
        count[i]=0;
    }
    for(int i=0;i<str1.length();i++){
        count[str1[i]-'a']++;
    }
    for(int i=0;i<str2.length();i++){
        count[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        ans+=abs(count[i]);
    }
    return ans;
}