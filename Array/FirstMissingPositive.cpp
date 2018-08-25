// Given an unsorted integer array, find the first missing positive integer.

// Example:

// Given [1,2,0] return 3,

// [3,4,-1,1] return 2,

// [-8, -7, -6] returns 1

// Your algorithm should run in O(n) time and use constant space.

int Solution::firstMissingPositive(vector<int> &A) {
    
    for(int i=0;i<A.size();i++){
        if((A[i]>0) && (A[i]<=A.size())){
            int index = A[i]-1;
            if(A[index]!=INT_MAX){
                swap(A[i],A[index]);
                A[index] = INT_MAX;
                i--;
            }
        }
    }
    
    
    for(int i=0;i<A.size();i++){
        if(A[i]!=INT_MAX){
            // cout << i <<" "<<A[i] << "\n";
            return i+1;
        }
    
    }
    
    return A.size()+1;
    
    
    
    
    
}
