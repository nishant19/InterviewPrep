// Given a string, find the rank of the string amongst its permutations sorted lexicographically. 
// Assume that no characters are repeated.

// Example :

// Input : 'acb'
// Output : 2

// The order permutations with letters 'a', 'c', and 'b' : 
// abc
// acb
// bac
// bca
// cab
// cba
// The answer might not fit in an integer, so return your answer % 1000003

int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }
    return (x)*(factorial(x-1))%1000003;
}

int countOnes(vector<bool> &letterUsed, int index){
    int count=0;
    for(int j=0;j<index;j++){
        if(letterUsed[j]==1){
            count++;
        }
    }
    return count;
}

int Solution::findRank(string A) {
    int length = A.length();
    int rank = 0;
    vector<bool> letterUsed(length);
    
    for(int i=0;i<length;i++){
        letterUsed[i] = 0;
    }
    
    string sortedWord = A;
    sort(sortedWord.begin(),sortedWord.end());
    
    for(int i=0;i<length;i++){
        
        int placeInSorted = sortedWord.find(A[i]);
        letterUsed[placeInSorted]=1;
        int alreadyUsed = countOnes(letterUsed,placeInSorted);
        // cout << alreadyUsed;
        
        int currentBehind = (placeInSorted-alreadyUsed)*factorial(length-1-i)%1000003;
        
        // cout << currentBehind <<" ";
        rank+= currentBehind;
    }
    rank = rank+1%1000003;
    return rank%1000003;
}
