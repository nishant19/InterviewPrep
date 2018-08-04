// Given a number N, find all factors of N.

// Example:

// N = 6 
// factors = {1, 2, 3, 6}
// Make sure the returned array is sorted.

vector<int> Solution::allFactors(int A) {
    vector<int> factors = {};
    int size;
    
    if(A==1){
        factors.push_back(1);
        return factors;
    }
    
    int i;
    
    for(i=1;i<sqrt(A);i++){
        if(A%i==0){
            size = factors.size();
            factors.insert(factors.begin()+size/2,i);
            factors.insert(factors.begin()+size/2+1,A/i);
            
        }
    }
    
    i = sqrt(A);
    size = factors.size();
    
    if(i*i==A){
        factors.insert(factors.begin()+size/2,i);
    }
    
     return factors;
    
}


