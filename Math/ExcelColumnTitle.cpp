// Given a positive integer, return its corresponding column title as appear in an Excel sheet.

// For example:

//     1 -> A
//     2 -> B
//     3 -> C
//     ...
//     26 -> Z
//     27 -> AA
//     28 -> AB 

string Solution::convertToTitle(int A) {
    string ans = "";
    char a;
    int shiftFromZero = 1;
    
    while(A!=0){
        int rem = (A-shiftFromZero)%26;
        char a = (rem + 'A');
        A=(A-shiftFromZero)/26;
        
        ans = a + ans;
        
    }
    return ans;
}
