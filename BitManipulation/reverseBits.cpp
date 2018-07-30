// Reverse bits of an 32 bit unsigned integer

// Example 1:

// x = 0,

//           00000000000000000000000000000000  
// =>        00000000000000000000000000000000
// return 0

// Example 2:

// x = 3,

//           00000000000000000000000000000011 
// =>        11000000000000000000000000000000

unsigned int Solution::reverse(unsigned int A) {
    int lowerBit;
    int higherBit;
    for(int k=0;k<16;k++){
        lowerBit = (A >> k) & 1 ;
        higherBit = (A >> (31-k)) & 1;
        if(lowerBit!=higherBit){
            A = A ^ (1 << k) ^ (1 << (31-k ));
        }
        
    }
    return A;

}
