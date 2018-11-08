// Remove Duplicates from Sorted Array

// Given a sorted array, remove the duplicates in place such that each element can appear atmost twice and return the new length.

// Do not allocate extra space for another array, you must do this in place with constant memory.

// Note that even though we want you to return the new length, make sure to change the original array as well in place

// For example,
// Given input array A = [1,1,1,2],

// Your function should return length = 3, and A is now [1,1,2].

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int correct = 0;
    int i;
    if(A.size()<=2){
        return A.size();
    }
    for(i=0;i<A.size()-2;i++){
        if(A[i]!=A[i+2]){
            A[correct]=A[i];
            correct++;
        }
    }
    for(i;i<A.size();i++){
        A[correct] = A[i];
        correct++;
    }
    
    if(correct!=A.size()){
        A.erase(A.begin()+correct,A.end());
    }
    return correct;
}


