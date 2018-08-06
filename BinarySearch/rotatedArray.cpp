// Suppose a sorted array A is rotated at some pivot unknown to you beforehand.

// (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

// Find the minimum element.

// The array will not contain duplicates.

int Solution::findMin(const vector<int> &A) {
    int min;
    int start = 0;
    int end = A.size()-1;
    int mid,next,prev;
    
    
    
    
    while(start<=end){
        if(start==end){
        return A[0];
        }
        if(end==1){
            return (A[0]<A[1])?A[0]:A[1];
        }
        mid=(start+end)/2;
        next = (mid+1)%(end+1);
        prev = (mid+end)%(end+1);
        
        if((A[mid]<A[prev]) && (A[mid]<A[next])){
            return A[mid];
        }
        else if((A[mid]>A[prev]) && (A[mid]>A[next])){
            return A[next];
        }
        else if(A[mid]<A[end]){
            end=(mid-1)%(end+1);
        }
        else{
            start=(mid+1)%(end+1);
        }
        
    }
}
