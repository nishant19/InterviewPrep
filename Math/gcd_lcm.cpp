// for 2 given numbers find out their LCM and GCD.

// Input:
// The first line contains an integer 'T' denoting the total number of test cases. In each test cases, there are two numbers a and b.


// Output:
// Find LCM and HCF. 


// Constraints:
// 1 <= T <= 30
// 1 <= a <= 1000
// 1 <= b <= 1000


// Example:
// Input:
// 2

// 5 10

// 14 8

// Output:
// 10 5
// 56 2

#include <iostream>
using namespace std;

int gcd(int a,int b){
    int greater = max(a,b);
    if(greater!=a){
        int temp = a;
        a = b;
        b = temp;
    }
    
    if(b==0){
        return a;
    }
    
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}


int lcm(int a,int b){
    int t = gcd(a,b);
    return (a*b)/t;
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin >> a >> b;
	    cout << lcm(a,b) <<" "<<gcd(a,b) <<"\n";
	}
	return 0;
}