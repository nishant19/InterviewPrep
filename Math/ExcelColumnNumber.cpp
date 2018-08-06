// Given a column title as appears in an Excel sheet, return its corresponding column number.

// Example:

//     A -> 1
    
//     B -> 2
    
//     C -> 3
    
//     ...
    
//     Z -> 26
    
//     AA -> 27
    
//     AB -> 28 

int Solution::titleToNumber(string A) {
    int length = A.length();
    int number = 0;
    unordered_map<char,int> chart;
    
    for(int i=65;i<91;i++){
        char letter = i;
        chart[letter] = i-64;
    }
    
    // for(auto &i:chart){
    //     cout << i.first<<" "<<i.second<<"\n";
    // }
    
    // return 0;
    
    for(int i=0;i<length;i++){
        char letter = A[i];
        number += pow(26,length-i-1)*chart[letter];
        // cout << number <<"\n";
        
    }
    
    return number;
    
    
}
