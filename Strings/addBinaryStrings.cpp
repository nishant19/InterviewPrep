// Given two binary strings, return their sum (also a binary string).

// Example:

// a = "100"

// b = "11"
// Return a + b = “111”.

string Solution::addBinary(string A, string B){
    if(A.length()<B.length()){
        int diff = B.length()-A.length();
        
        string adder = "";
        for(int i=0;i<diff;i++){
            adder.push_back('0');
        }
        A = adder+A;
    }
    else if(B.length()<A.length()){
        int diff = A.length()-B.length();
        
        string adder = "";
        for(int i=0;i<diff;i++){
            adder.push_back('0');
        }
        B = adder+B;
    }
    
    int carry = 0;
    int sum = 0;
    string ans = "";
    
    for(int i=A.length()-1;i>=0;i--){
        
        int a = A[i]-'0';
        int b = B[i]-'0';
        
        sum = (a+b+carry)%2;
        carry = (a&b)|(b&carry)|(carry&a);
        string s = to_string(sum);
        
        ans.insert(0,s);
    }
    
    // cout << carry <<" ";
    
    if(carry==1){
        string c = to_string(carry);
        ans.insert(0,c);
    }
    return ans;
    
}
