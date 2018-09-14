// You are given two positive numbers A and B. You need to find the maximum valued integer X such that:

// X divides A i.e. A % X = 0
// X and B are co-prime i.e. gcd(X, B) = 1
// For example,

// A = 30
// B = 12
// We return
// X = 5

int gcd(int A,int B){
    int m  = max(A,B);
    if(m!=A){
        swap(A,B);
    }
    
    if(A==0 || B==0){
        return 0;
    }
    if(A%B==0){
        return B;
    }
    return gcd(A%B,B);
    
}

int Solution::cpFact(int A, int B) {
    while(gcd(A,B)!=1){
        A = A/(gcd(A,B));
    }
    return A;
    
}
