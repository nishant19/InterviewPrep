// You are given an array of N integers, A1, A2 ,…, AN. Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N.
// f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.

// For example,

// A=[1, 3, -1]

// f(1, 1) = f(2, 2) = f(3, 3) = 0
// f(1, 2) = f(2, 1) = |1 - 3| + |1 - 2| = 3
// f(1, 3) = f(3, 1) = |1 - (-1)| + |1 - 3| = 4
// f(2, 3) = f(3, 2) = |3 - (-1)| + |2 - 3| = 5

// So, we return 5.

int Solution::maxArr(vector<int> &A) {
    
    int left1 = INT_MIN;
    int right1 = INT_MAX;
    int left2 = INT_MIN;
    int right2 = INT_MAX;
    
    for(int i=0;i<A.size();i++){
       int current1 = A[i]+ i;
       
       if(left1 < current1){
           left1 = current1;
       }
       if(right1 > current1){
           right1 = current1;
       }
       
       int current2 = A[i]-i;
       
       if(left2<current2){
           left2 = current2;
       }
       if(right2 > current2){
           right2 = current2;
       }
    //   cout << left1 <<" "<<right1<<" "<<left2 <<" "<<right2<<"\n";
       
    }
    return max(left1-right1,left2-right2);
}
