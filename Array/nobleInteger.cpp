// Given an integer array, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p
// If such an integer is found return 1 else return -1.

// inefficient space wise ( map approach)

#include <bits/stdc++.h>

int Solution::solve(vector<int> &A) {
    map<int,int> map = {};
    int size = A.size();
    for(int i=0;i<size;i++){
        map[A[i]]++;
    }
    
    int countSmaller = 0;
    for(auto iter = map.begin();iter!=map.end();++iter){
        int current = iter->second;
        int greater = size-current-countSmaller;
        if(greater==iter->first){
            return 1;
        }
        countSmaller+=iter->second;
    }
    
    return -1;
}

// efficient approach :)

#include <bits/stdc++.h>

int Solution::solve(vector<int> &A) {
   sort(A.begin(),A.end());
   int size = A.size();
   for(int i=0;i<size-1;i++){
       if(A[i]!=A[i+1]){
           if(A[i]==(size-i-1)){
               return 1;
           }
       }
   }
   
   if(A[size-1]==0){
       return 1;
   }
   return -1;
}




