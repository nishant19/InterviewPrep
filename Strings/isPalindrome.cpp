// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Example:

// "A man, a plan, a canal: Panama" is a palindrome.

// "race a car" is not a palindrome.

// Return 0 / 1 ( 0 for false, 1 for true ) for this problem

int Solution::isPalindrome(string A) {
    int start = 0;
    int end = A.length()-1;
    
    while(start<=end){
        if(isalnum(A[start])){
            char left = A[start];
        
            if(isalnum(A[end])){
                char right = A[end];
                
                if(!(tolower(left)==tolower(right))){
                    return false;
                }
                start++;
                end--;
            }
            else{
                end--;
            }
        
        }
        else{
            start++;
        }
        // cout << start <<" "<<end <<"\n";
        
    }
    
    return true;
}
