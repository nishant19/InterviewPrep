// Find out the maximum sub-array of non negative numbers from an array.
// The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

// Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array A is greater than sub-array B if sum(A) > sum(B).

// Example:

// A : [1, 2, 5, -7, 2, 3]
// The two sub-arrays are [1, 2, 5] [2, 3].
// The answer is [1, 2, 5] as its sum is larger than [2, 3]
// NOTE: If there is a tie, then compare with segment's length and return segment which has maximum length
// NOTE 2: If there is still a tie, then return the segment with minimum starting index

vector<int> Solution::maxset(vector<int> &A) {
    
    vector<int> set;
    long long int sum = 0, ans =0;
    long long int start = 0,end = 0;
    long long int maxStart = 0, maxEnd = -1;
    
    for(long long int i=0;i<A.size();i++){
        if(A[i]>=0){
            end = i;
            sum += A[i];
            if(ans<sum){
                ans = sum;
                maxStart = start;
                maxEnd = end;
            }
            
            else if(ans==sum){
                long long int length = end-start+1;
                long long int maxLength = maxEnd - maxStart + 1;
                
                if(length>maxLength){
                    maxStart = start;
                    maxEnd = end;
                }
                
            }
            
        }
        else{
            sum = 0;
            start = i+1;
            end = start;
        }
    }
    
    if(maxEnd ==-1){
        return {};
    }
    
    for(int i=maxStart;i<=maxEnd;i++){
        set.push_back(A[i]);
    }
    return set;
    
    
}
