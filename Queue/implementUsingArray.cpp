// Submissions: 7777   Accuracy: 38.55%   Difficulty: Basic
         
// Implement a Queue using Array. Your task is only to complete the functions push and pop.

// Input Format:
// The first line of the input contains an integer 'T' denoting the number of test cases. Then T test cases follow.
// First line of each test case contains an integer Q denoting the number of queries . 
// A Query Q is of 2 Types:
// (i) 1 x   (a query of this type means  pushing 'x' into the queue)
// (ii) 2     (a query of this type means to pop element from queue and print the poped element)
// The second line of each test case contains Q queries seperated by space.

// Output Format:
// The output for each test case will  be space separated integers having -1 if the queue is empty else the element poped out from the queue .

// Your Task :
// You are required to complete the two methods push which take one argument an integer 'x' to be pushed into the quee  and pop which returns a integer poped out from othe queue.

// Constraints:
// 1 <= T <= 100
// 1 <= Q <= 100
// 1 <= x <= 100

// Example:
// Input
// 1
// 5
// 1 2 1 3 2 1 4 2  

// Output
// 2 3

// Explanation:
// In the first test case for query 
// 1 2    the quee will be {2}
// 1 3    the queue will be {2 3}
// 2       poped element will be 2 the queue will be {3}
// 1 4    the queue will be {3 4}
// 2       poped element will be 3

void Queue :: push(int x)
{       
    if(rear==10001){
        return;
    }
    arr[rear]=x;
    rear++;
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
      if(front==rear){
          return -1;
      } 
      front++;
      return arr[front-1];
}