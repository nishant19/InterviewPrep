// Given an integer n, return the number of trailing zeroes in n!.

// Note: Your solution should be in logarithmic time complexity.

// Example :

// n = 5
// n! = 120 
// Number of trailing zeros = 1
// So, return 1

int Solution::trailingZeroes(int A) {
    int zeros = 0;
    
    for(int i=1;pow(5,i)<=A;i++){
        int add = A/pow(5,i);
        zeros+=add;
    }
    return zeros;
}
