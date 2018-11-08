// Remove Element

// Given an array and a value, remove all the instances of that value in the array. 
// Also return the number of elements left in the array after the operation.
// It does not matter what is left beyond the expected length.

//  Example:
// If array A is [4, 1, 1, 2, 1, 3]
// and value elem is 1, 
// then new length is 3, and A is now [4, 2, 3] 
// Try to do it in less than linear additional space complexity.

int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int correct = 0;
    int i;
    // int size = A.size();
    if(A.size()==0){
        return A.size();
    }
    
    for(i=0;i<A.size();i++){
        if(A[i]!=B){
            A[correct] = A[i];
            correct++;
        }
    }
    
    if(correct!=A.size()){
        A.erase(A.begin()+correct,A.end());
    }
    
    return correct;
        
}
