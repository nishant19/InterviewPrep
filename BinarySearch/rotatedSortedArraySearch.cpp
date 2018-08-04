// Suppose a sorted array is rotated at some pivot unknown to you beforehand.

// (i.e., 0 1 2 4 5 6 7  might become 4 5 6 7 0 1 2 ).

// You are given a target value to search. If found in the array, return its index, otherwise return -1.

// You may assume no duplicate exists in the array.

// Input : [4 5 6 7 0 1 2] and target = 4
// Output : 0

int Solution::search(const vector<int> &A, int B) {
    int start = 0;
    int end = A.size()-1;
    int size = A.size();
    int maxPos,mid;
    int prev,next;
    
    while(start<=end){
        mid = (start+end)/2;
        
        next = (mid+1)%(size);
        prev = (mid+size-1)%(size);
        
        if((A[mid]>A[prev])&&(A[mid]>A[next])){
            maxPos = mid;
        }
        if(A[mid]<A[0]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
            
    }
    
    // return maxPos;
    
    
    
    if((B>=A[0]) && (B<=A[maxPos])){
        start = 0;
        end = maxPos;
    
        while(start<=end){
            mid = (start+end)/2;
            if(A[mid]==B){
                
                return mid;
            }
            if(B>A[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    
    
    else if((B>=A[maxPos+1]) && (B<=A[size-1])){
        
        start = maxPos+1;
        end = size -1;
    
        while(start<=end){
            mid = (start+end)/2;
            if(A[mid]==B){
                return mid;
            }
            if(A[mid]>B){
                end = end-1;
            }
            else{
                start = mid+1;
            }
        }
        
    }
    
    
    return -1;
    
}

