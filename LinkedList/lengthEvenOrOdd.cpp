// Given a linked list of size N, your task is to complete the function isLengthEvenOrOdd() which check whether the length of linked list is even or odd.

// Input:
// The function takes a single argument as input, the reference pointer to the head of the linked list.
// There will be T test cases and for each test case the function will be called separately.

// Output:
// For each test the, If the length of the list is even then function should return 0 else return 1.

// Constraints:
// 1<=T<=100
// 1<=N<=103
// 1<=A[]<=103

// Example:
// Input:
// 2
// 3
// 9 4 3
// 6
// 12 52 10 47 95 0
// Output:
// Odd
// Even

int isLengthEvenOrOdd(struct Node* head)
{
     int length = 0;
     while(head !=NULL){
         head = head->next;
         length++;
     }
     if(length%2==0){
         return 0;
     }
     else{
         return 1;
     }
}