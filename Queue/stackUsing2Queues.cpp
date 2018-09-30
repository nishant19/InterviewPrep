                  
// Implement a Stack using 2 queue q1 and q2 .

// Input (To be used for Expected Output):

// The first line of the input contains an integer 'T' denoting the number of test cases. Then T test cases follow.
// First line of each test case contains an integer Q denoting the number of queries . 
// A Query Q is of 2 Types
// (i) 1 x   (a query of this type means  pushing 'x' into the stack)
// (ii) 2     (a query of this type means to pop element from stack and print the poped element)

// The second line of each test case contains Q queries seperated by space.

// Output:
// The output for each test case will  be space separated integers having -1 if the stack is empty else the element poped out from the stack . 
// You are required to complete the two methods push which take one argument an integer 'x' to be pushed into the stack  and pop which returns a integer poped out from the stack.

// Constraints:
// 1<=T<=100
// 1<=Q<=100
// 1<=x<=100

// Example:
// Input
// 1
// 5
// 1 2 1 3 2 1 4 2   

// Output
// 3 4

// Explanation:

// In the first test case for query 
// 1 2    the stack will be {2}
// 1 3    the stack will be {2 3}
// 2       poped element will be 3 the stack will be {2}
// 1 4    the stack will be {2 4}
// 2       poped element will be 4

void QueueStack :: push(int x)
{
    q2.push(x);
    while(!q1.empty()){
        int temp = q1.front();
        q1.pop();
        q2.push(temp);
    }
    queue<int> t = q1;
    q1 = q2;
    q2 = t;
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    if(q1.empty()){
        return -1;
    }
    int t = q1.front();
    q1.pop();
    return t;
}
