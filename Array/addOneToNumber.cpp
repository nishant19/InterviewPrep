// Given a non-negative number represented as an array of digits,

// add 1 to the number ( increment the number represented by the digits ).

// The digits are stored such that the most significant digit is at the head of the list.

// Example:

// If the vector has [1, 2, 3]

// the returned vector should be [1, 2, 4]

// as 123 + 1 = 124.

vector<int> Solution::plusOne(vector<int> &A) {
    
    while(A.size()!=1 && A[0]==0){
        A.erase(A.begin());
    }
    
    int sum,rem;
    int carry = 0;
    
    vector<int> ans(A.size());
    
    for(int i=A.size()-1;i>=0;i--){
        sum = (i==A.size()-1)?(A[i]+1):A[i]+carry;
        rem = sum%10;
        carry = sum/10;
        ans[i] = rem;
        // cout << i <<" "<< ans[i]<<"\n";
    }
    if(carry!=0){
        ans.insert(ans.begin(),carry);
    }
    return ans;
    
}
