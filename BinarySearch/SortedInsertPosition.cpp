// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You may assume no duplicates in the array.

// Here are few examples.

// [1,3,5,6], 5 → 2
// [1,3,5,6], 2 → 1
// [1,3,5,6], 7 → 4
// [1,3,5,6], 0 → 0

int Solution::searchInsert(vector<int> &A, int B) {
    int start = 0;
    int end = A.size()-1;
    int mid;
    int insertPos;
    
    while(start<=end){
        mid = start + (end-start)/2;
        if(start==end){
            insertPos = (B>A[start])?start+1:start;
            return insertPos;
        }
        if(B==A[mid]){
            return mid;
        }
        else if(B>A[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return mid;
}
