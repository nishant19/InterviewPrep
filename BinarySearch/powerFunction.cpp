// Implement pow(x, n) % d.

// In other words, given x, n and d,

// find (xn % d)

// Note that remainders on division cannot be negative. 
// In other words, make sure the answer you return is non negative.

// Input : x = 2, n = 3, d = 3
// Output : 2

// 2^3 % 3 = 8 % 3 = 2.

int Solution::pow(int x, int n, int d) {
    
    long long int sum;
    long long int ans,smallAns;
    
    if(n==0){
        return 1%d;
    }
    
    
    if(n==1){
                
        sum = x;
        if(sum<0){
            sum = (sum%d + d); 
        }
        return (sum%d);
                
                
    }
    
   smallAns = pow(x,n/2,d);
    
    if(n%2==0){
        ans = (smallAns*smallAns)%d;
        return ans;
    }
    else{
            
        ans = (smallAns*smallAns)%d;
        ans = (ans*x)%d;
        
        
        
        if(ans<0){
            ans = (ans%d+d);
        }
        return ans%d;
            
    }
    
}
