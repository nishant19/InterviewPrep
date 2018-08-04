// Given a number N, verify if N is prime or not.

// Return 1 if N is prime, else return 0.

// Example :

// Input : 7
// Output : True

int Solution::isPrime(int A) {
    int sq = sqrt(A);
    
    if(A==1){
        return 0;
    }
    
    if(A==2){
        return 1;
    }
    
    for(int i=2;i<=sq;i++){
        if(A%i==0){
            return 0;
        }
    }
    return 1;
}
