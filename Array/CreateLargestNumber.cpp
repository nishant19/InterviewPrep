// Given a list of non negative integers, arrange them such that they form the largest number.

// For example:

// Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

// Note: The result may be very large, so you need to return a string instead of an integer.

bool compare (int a,int b){
    string A = to_string(a);
    string B = to_string(b);
    string aFirst = A+B;
    string bFirst = B+A;
    
   return (stoll(aFirst)>=stoll(bFirst));
    
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> b = A;
    sort(b.begin(),b.end(),compare);
    string ans = "";
    for(int i:b){
        ans+= to_string(i);
    }
    if(ans.find_first_not_of('0')==string::npos){
        return "0";
    }
    return ans;
    
}
