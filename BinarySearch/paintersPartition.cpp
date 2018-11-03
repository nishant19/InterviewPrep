// You have to paint N boards of length {A0, A1, A2, A3 … AN-1}. There are K painters available and you are also given how much time a painter takes to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board.

// 2 painters cannot share a board to paint. That is to say, a board
// cannot be painted partially by one painter, and partially by another.
// A painter will only paint contiguous boards. Which means a
// configuration where painter 1 paints board 1 and 3 but not 2 is
// invalid.
// Return the ans % 10000003

// Input :
// K : Number of painters
// T : Time taken by painter to paint 1 unit of board
// L : A List which will represent length of each board

// Output:
//      return minimum time to paint all boards % 10000003
// Example

// Input : 
//   K : 2
//   T : 5
//   L : [1, 10]
// Output : 50

long long int getPainters(vector<int> &C,long long int t){
    long long int sum = 0;
    long long int painters = 1;
    for(int i=0;i<C.size();i++){
        if(sum+C[i]<=t){
            sum = sum+C[i];
        }
        else{
            sum = C[i];
            painters++;
        }
    }
    // cout << painters <<"\n";
    return painters;
}

int Solution::paint(int A, int B, vector<int> &C) {
    long long int sum = 0;
    long long int max = INT_MIN;
    for(int i=0;i<C.size();i++){
        sum+=C[i];
        if(max<C[i]){
            max = C[i];
        }
    }
    
    if(A==C.size()){
        return (max*B)%10000003;
    }
    
    long long int start = max;
    long long int end = sum;
    
    long long int ans = max;
    
    while(start<=end){
        long long int mid = start+(end-start)/2;
        long long int painters = getPainters(C,mid);
        
        // cout << mid <<" ";
        
        if(painters == A){
            ans = mid;
            end = mid-1;
        }
        else if(painters<A){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        
    }
    
    return (ans*B)%10000003;
    
}
