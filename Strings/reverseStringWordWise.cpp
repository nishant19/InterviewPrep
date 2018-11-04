// Given an input string, reverse the string word by word.

// Example:

// Given s = "the sky is blue",

// return "blue is sky the".

// A sequence of non-space characters constitutes a word.
// Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.
// If there are multiple spaces between words, reduce them to a single space in the reversed string.

void Solution::reverseWords(string &A) {
    int oldLength = A.length();
    int i = A.length()-1;
    
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
        string sub = A.substr(currentWordStart,currentWordEnd-currentWordStart+1);
        A.append(sub);
        A.append(" ");
        
        // cout << A <<" ";
        // i--;
    }
    
    A.erase(0,oldLength);
    A.erase(A.length()-1,1);
    
    
    
    return;
    
    
}
