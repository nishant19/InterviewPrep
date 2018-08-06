// Determine whether an integer is a palindrome. Do this without extra space.

// A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
// Negative numbers are not palindromic.

// Example :

// Input : 12121
// Output : True

// Input : 123
// Output : False

int Solution::isPalindrome(int A) {
    if(A<0){
        return 0;
    }
    
    if(A/10==0){
        return 1;
    }
    
    int digits = 0;
    int temp = A;
    
    while(temp!=0){
        temp/=10;
        digits++;
    }
    
    for(int i=0;i<digits/2;i++){
        int leftDivisor = int(pow(10,digits-1-i));
        int rightDivisor = int(pow(10,i));
        int leftDigit = (A/leftDivisor)%10;
        int rightDigit = (A/rightDivisor)%10;
        
        if(leftDigit!=rightDigit){
            return 0;
        }
        
    }
    
    return 1;
    
}



// alternate solution ;)

int Solution::isPalindrome(int A) {
    string str = to_string(A);
    string temp = str;
    reverse(str.begin(),str.end());
    if(str==temp){
        return 1;
    }
    return 0;

