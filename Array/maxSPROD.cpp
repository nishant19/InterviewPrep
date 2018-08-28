// You are given an array A containing N integers. The special product of each ith integer in this array is defined as the product of the following:<ul>

// LeftSpecialValue: For an index i, it is defined as the index j such that A[j]>A[i] (i>j). If multiple A[j]’s are present in multiple positions, the LeftSpecialValue is the maximum value of j. 

// RightSpecialValue: For an index i, it is defined as the index j such that A[j]>A[i] (j>i). If multiple A[j]s are present in multiple positions, the RightSpecialValue is the minimum value of j.

// Write a program to find the maximum special product of any integer in the array.

// Input: You will receive array of integers as argument to function.

// Return: Maximum special product of any integer in the array modulo 1000000007.

// Note: If j does not exist, the LeftSpecialValue and RightSpecialValue are considered to be 0.

// Constraints 1 <= N <= 10^5 1 <= A[i] <= 10^9

int Solution::maxSpecialProduct(vector<int> &A) {
    if(A.size()<3){
        return 0;
    }
    stack<long long int> left;
    stack<long long int> right;
    long long int maxSpecial = INT_MIN;
    vector<long long int> leftSpecials(A.size());
    vector<long long int> rightSpecials(A.size());
    
    for(int i=0;i<A.size();i++){
        leftSpecials[i]=0;
        while(!left.empty() && (A[left.top()]<=A[i])){
            left.pop();
        }
        if(!left.empty()){
            leftSpecials[i] = left.top();
        }
        left.push(i);
        
    }
    
    for(int i=A.size()-1;i>=0;i--){
        rightSpecials[i]=0;
        while(!right.empty() && (A[right.top()]<=A[i])){
            right.pop();
            
        }
        if(!right.empty()){
            rightSpecials[i] = right.top();
        }
        right.push(i);
        
    }
    
    for(int i=0;i<A.size();i++){
        long long int product = (leftSpecials[i]*rightSpecials[i]);
        // cout << leftSpecials[i]<<" "<<rightSpecials[i]<<"\n";
        if(product>maxSpecial){
            maxSpecial = product;
        }
    }
    
    return int(maxSpecial%1000000007);
}
