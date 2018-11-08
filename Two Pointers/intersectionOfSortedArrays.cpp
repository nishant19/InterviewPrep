// Find the intersection of two sorted arrays.
// OR in other words,
// Given 2 sorted arrays, find all the elements which occur in both the arrays.

// Example :

// Input : 
//     A : [1 2 3 3 4 5 6]
//     B : [3 3 5]

// Output : [3 3 5]

// Input : 
//     A : [1 2 3 3 4 5 6]
//     B : [3 5]

// Output : [3 5]

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> ans;
    int a = 0;
    int b = 0;
    
    int sizea = A.size();
    int sizeb = B.size();
    
    if(A[0]>B[B.size()-1]||B[0]>A[A.size()-1]){
        return {};
    }
    
    while(a<sizea && b<sizeb){
        if(A[a]>B[b]){
            b++;
        }
        else if(B[b]>A[a]){
            a++;
        }
        else{
            ans.push_back(A[a]);
            a++;
            b++;
        }
    }
    
    return ans;
}

