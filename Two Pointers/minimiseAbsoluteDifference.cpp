// Given three sorted arrays A, B and Cof not necessarily same sizes.

// Calculate the minimum absolute difference between the maximum and minimum number from the triplet a, b, c such that a, b, c belongs arrays A, B, C respectively.
// i.e. minimize | max(a,b,c) - min(a,b,c) |.

// Example :

// Input:

// A : [ 1, 4, 5, 8, 10 ]
// B : [ 6, 9, 15 ]
// C : [ 2, 3, 6, 6 ]
// Output:

// 1
// Explanation: We get the minimum difference for a=5, b=6, c=6 as | max(a,b,c) - min(a,b,c) | = |6-5| = 1.

pair<int,int> minMax(vector<int> &A){
    
    pair<int,int> ans;
    int min = INT_MAX;
    int max = INT_MIN;
    
    for(int i=0;i<A.size();i++){
        if(A[i]>max){
            max = A[i];
        }
        if(A[i]<min){
            min = A[i];
        }
    }
    ans.first = min;
    ans.second = max;
    return ans;
    
}

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int a = 0;
    int b = 0;
    int c = 0;
    int sizea = A.size();
    int sizeb = B.size();
    int sizec = C.size();
    
    int minDiff = INT_MAX;
    
    vector<int> current;
    
    
    while(a<sizea && b<sizeb && c<sizec){
        current.push_back(A[a]);
        current.push_back(B[b]);
        current.push_back(C[c]);
        
        pair<int,int> ans = minMax(current);
        
        int diff = ans.second-ans.first;
        
        if(diff < minDiff){
            minDiff = diff;
        }
        
        if(ans.first==A[a]){
            a++;
        }
        else if(ans.first==B[b]){
            b++;
        }
        else{
            c++;
        }
        // cout << a <<" "<<b<<" "<<c<<"\n";
        // cout << ans.first <<"\n";
        
        current.clear();
        
    }
    return minDiff;
}
