// Implement int sqrt(int x).

// Compute and return the square root of x.

// If x is not a perfect square, return floor(sqrt(x))

int Solution::sqrt(int A) {
    long long int start = 1;
    long long int end = A;
    long long int mid,ans;
    if(A==0 || A==1){
        return A;
    }
    while(start<=end){
        
        mid = (start+end)/2;
        if(mid*mid == A){
            return mid;
        }
        else if(mid*mid < A){
            start = mid+1;
            ans = mid;
        }
        else {
            end = mid-1;
        }
        
        
        
    }
    return ans;
    
}
