// Given 2 non negative integers m and n, find gcd(m, n)

// GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
// Both m and n fit in a 32 bit signed integer.

// Example

// m : 6
// n : 9

// GCD(m, n) : 3 

int Solution::gcd(int A, int B) {
    if(A==B){
        return A;
    }
    
    if(A==1 || B==1){
        return 1;
    }

    int bigger = (A>B)?A:B;
    int smaller = (A<B)?A:B;
    
    if(smaller==0){
        return bigger;
    }
    
    if(bigger%smaller==0){
        return smaller;
    }
    
    return gcd(bigger-smaller,smaller);
    
    
}
