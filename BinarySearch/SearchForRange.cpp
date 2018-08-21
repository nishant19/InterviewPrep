// Given a sorted array of integers, find the starting and ending position of a given target value.

// Your algorithm’s runtime complexity must be in the order of O(log n).

// If the target is not found in the array, return [-1, -1].

// Example:

// Given [5, 7, 7, 8, 8, 10]

// and target value 8,

// return [3, 4].

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int startPos = -1;
    int endPos = -1;
    vector<int> positions = {};
    
    // calculating first occurrence
    
    int start = 0;
    int end = A.size()-1;
    int mid;
    
    while(start<=end){
        mid = start+(end-start)/2;
        // cout << mid <<"\n";
        
        if(B==A[mid]){
            end = mid-1;
            startPos = mid;
        }
        else if(B>A[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    
    // calculating the last occurence

    start = startPos;
    end = A.size()-1;
    
    while(start<=end){
        mid = start+(end-start)/2;
        
        // cout << mid <<"\n";
        if(B==A[mid]){
            start = mid+1;
            endPos = mid;
        }
        else if(B>A[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    
    positions.push_back(startPos);
    positions.push_back(endPos);
    return positions;
    
    
}
