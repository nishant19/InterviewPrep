// Given a sorted array of integers, find the number of occurrences of a given target value.
// Your algorithm’s runtime complexity must be in the order of O(log n).
// If the target is not found in the array, return 0

// **Example : **
// Given [5, 7, 7, 8, 8, 10] and target value 8,
// return 2.

int Solution::findCount(const vector<int> &A, int B) {
    int start = 0;
    int end = A.size()-1;
    int count=0;
    int mid;
    int midFirstFound;
    
    while(start<=end){
        midFirstFound = (start+end)/2;
        if(A[midFirstFound]==B){
            mid = midFirstFound;
            while((A[mid]==B) && (mid<=end)){
                count++;
                mid++;
            }
            mid = midFirstFound-1;
            
            while((A[mid]==B)&&(mid>=start)){
                count++;
                mid--;
            }
            return count;
            
        }
        if(A[midFirstFound]>B){
            end=midFirstFound-1;
        }
        else{
            start=midFirstFound+1;
        }
    }
    
    return 0;
}
