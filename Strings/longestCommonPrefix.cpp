// Write a function to find the longest common prefix string amongst an array of strings.

// Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

// As an example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".

// Given the array of strings, you need to find the longest S which is the prefix of ALL the strings in the array.

// Example:

// Given the array as:

// [

//   "abcdefgh",

//   "aefghijk",

//   "abcefgh"
// ]
// The answer would be “a”.

string Solution::longestCommonPrefix(vector<string> &A) {
    if(A.size()==1){
        return A[0];
    }
    
    string current = A[0];
    for(int j=0;j<A.size()-1;j++){
        
        string next = A[j+1];
        int i=0;
        
        while(i<current.length() && i<next.length() && current[i]==next[i]){
            i++;
        }
        current = current.substr(0,i);
    }
    
    return current;
    
    
}
