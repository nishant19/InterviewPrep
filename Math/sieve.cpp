// Given a number N, find all prime numbers upto N ( N included ).

// Example:

// if N = 7,

// all primes till 7 = {2, 3, 5, 7}

// Make sure the returned array is sorted.



vector<int> Solution::sieve(int A) {
    vector<int> primes(A+1);
    vector<int> result = {} ;
    
    primes[0]=0;
    primes[1]=0;
    
    for(int i=2;i<=A;i++){
        primes[i]=1;
    }
    
    int sq = sqrt(A);
    
    for(int i=2;i<=sq;i++){
        if(primes[i]==1){
            
            for(int j=2;i*j<=A;j++){
                primes[i*j]=0;
            }
        }
    }
    
    for(int i=2;i<=A;i++){
        if(primes[i]==1){
            result.push_back(i);
        }
    }
    
    return result;
}
