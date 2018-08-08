// Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

// Example

// Input : 4
// Output : True  
// as 2^2 = 4. 

int Solution::isPower(int A) {
    if(A==1){
        return 1;
    }
    int sq = sqrt(A);
    for(int i=2;i<=sq;i++){
        for(int j=2;pow(i,j)<=A;j++){
            if(pow(i,j)==A){
                return 1;
            }
        }
    }
    return 0;
}
