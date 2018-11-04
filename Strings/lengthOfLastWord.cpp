// Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a character sequence consists of non-space characters only.

// Example:

// Given s = "Hello World",

// return 5 as length("World") = 5.

// Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.

int Solution::lengthOfLastWord(const string A) {
    int i = A.length()-1;
    int last = 0;
    while(i>=0){
        while(i>=0 && A[i]==' '){
            i--;
        }
        if(i<0){
            break;
        }
        int currentWordEnd = i;
        while(i>=0 && A[i]!=' '){
            i--;
        }
        int currentWordStart = i+1;
        return currentWordEnd-currentWordStart+1;
    }
    
    return last;
}
