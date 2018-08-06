// Reverse digits of an integer.

// Example1:

// x = 123,

// return 321
// Example2:

// x = -123,

// return -321

// Return 0 if the result overflows and does not fit in a 32 bit signed integer

int Solution::reverse(int A) {
    long long int reverse = 0;
    long long int pos = abs(A);
    if(pos<0){
        return 0;
    }
    long long int rem;
    
    while(pos!=0){
        rem = pos%10;
        reverse = reverse*10+rem;
        
        pos=pos/10;
    }
    if(reverse>INT_MAX){
        return 0;
    }
    
    reverse = (A>0)?reverse:(-reverse);
    return int(reverse);
    
}
