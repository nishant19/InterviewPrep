// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P.......A........H.......N
// ..A..P....L....S....I...I....G
// ....Y.........I........R
// And then read line by line: PAHNAPLSIIGYIR
// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string text, int nRows);
// convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"
// **Example 2 : **
// ABCD, 2 can be written as

// A....C
// ...B....D
// and hence the answer would be ACBD.

string Solution::convert(string A, int B) {
    
    if(B==1|| A.length()==1){
        return A;
    }
    
    int length = A.length();
    string ans = "";
    
    int maxDiff = (B-1)*2;
    // first row
    
    int current = 0;
    while(current<length){
        ans+=A[current];
        current = (current+maxDiff);
    }
    
    
    
    for(int row = 2;row<B;row++){
        int diffOdd = (B-row)*2;
        int diffEven = maxDiff - diffOdd;
        
        current = row-1;
        int i=1;
        while(current<length){
            ans+=A[current];
            if(i%2!=0){
                current+=diffOdd;
            }
            else{
                current+=diffEven;
            }
            i++;
        }
        
    }
    
    // last row
    current = B-1;
    while(current<length){
        ans+=A[current];
        current = (current+maxDiff);
    }
    
    // ans+='\0';
    
    
    return ans;
}
