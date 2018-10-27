// Given an integer n your task is to complete the function convertToRoman which prints the corresponding roman number of n .

// Input:
// The first line of each test case contains the no of test cases T. Then T test cases follow. Each test case contains a single integer n.

// Output:
// For each test case in a new line output will be the roman number representation of n. 

// Constraints:
// 1<=T<=100
// 1<=n<4000

// Example:
// Input
// 2
// 5
// 3
// Output
// V
// III 
//  

void convertToRoman(int n) 
{
    string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hundreds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string thousands[] = {"","M","MM","MMM","MMMM"};
    
    string ans = "";
    int th = (n/1000)%10;
    // n = n/10;
    int hun = (n/100)%10;
    // n = n/10;
    int ten = (n/10)%10;
    // n = n/10;
    int one = (n)%10;
    ans += thousands[th]+hundreds[hun]+tens[ten]+ones[one];
    cout << ans;
    
}