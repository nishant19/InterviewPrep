// Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

// For example:

// Given the array [-2,1,-3,4,-1,2,1,-5,4],

// the contiguous subarray [4,-1,2,1] has the largest sum = 6.

// For this problem, return the maximum sum.

int Solution::maxSubArray(const vector<int> &A) {
    // int max = 0;
    bool posFound = false;
    int maxi = INT_MIN;
    
    for(int i=0;i<A.size();i++){
        if(A[i]>=0){
            posFound = true;
            break;
        }
        if(A[i]>maxi){
            maxi = A[i];
        }
    }
    
    if(!posFound){
        return maxi;
    }
    
    int sum = 0;
    int ans = 0;
    
    for(int i=0;i<A.size();i++){
        if(sum+A[i]>0){
            sum=sum+A[i];
        }
        else{
            sum = 0;
        }
        
        ans = max(ans,sum);
    }
    
    return ans;
}
