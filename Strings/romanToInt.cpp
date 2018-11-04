// Given a roman numeral, convert it to an integer.

// Input is guaranteed to be within the range from 1 to 3999.

// Read more details about roman numerals at Roman Numeric System

// Example :

// Input : "XIV"
// Return : 14
// Input : "XX"
// Output : 20

int Solution::romanToInt(string A) {
    unordered_map<char,int> map = {{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
    
    int sum = 0;
    int i;
    for(i=0;i<A.length()-1;i++){
        // char key = A[i];
        // char next = A[i+1];
        // if(distance(map.find(key),map.find(next))<0){
        //     sum-=map[key];
        // }
        // else{
        //     sum+=map[key];
        // }
        // cout << i <<" ";
        if(A[i]=='M'){
            sum+=1000;
        }
        else if(A[i]=='D'){
            sum+=500;
        }
        else if(A[i]=='C'){
            if(A[i+1]=='D'||A[i+1]=='M'){
                sum-=100;
            }
            else{
                sum+=100;
            }
        }
        else if(A[i]=='L'){
            sum+=50;
        }
        else if(A[i]=='X'){
            if(A[i+1]=='L' || A[i+1]=='C'){
                sum-=10;
            }
            else{
                sum+=10;
            }
        }
        else if(A[i]=='V'){
            sum+=5;
        }
        else if(A[i]=='I'){
            if(A[i+1]=='X'||A[i+1]=='V'){
                sum-=1;
            }
            else{
                sum+=1;
            }
        }
    }
    
    sum+=map[A[i]];
    return sum;
    
}
