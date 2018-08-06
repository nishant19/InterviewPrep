// Given a number N >= 0, find its representation in binary.

// Example:

// if N = 6,

// binary form = 110

string Solution::findDigitsInBinary(int A) {
    string binary = "";
    if(A==0){
        return "0";
    }
    while(A!=0){
        string rem = to_string(A%2);
        binary = rem + binary;
        A=A/2;
    }
    return binary;
}
