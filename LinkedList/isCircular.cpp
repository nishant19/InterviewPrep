// Given a singly linked list, find if the linked list is circular or not.  A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle.   An empty linked list is considered as circular.

// Note  that this problem is different from cycle detection problem, here all nodes have to be part of cycle.

// Input:

 

// You have to complete the method which takes one argument: the head of the linked list. You should not read any input from stdin/console.
// The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
// There are multiple test cases. For each test case, this method will be called individually.

// Output:
// The function should return true if the given linked list is circular, else false.

// Constraints:
// 1 <=T<= 50
// 1 <=N<= 100
// 1 <=value<= 1000

// Example:
// Input:
// 2
// 5 1      
// 1 2 3 4 5
// 6 0
// 2 4 6 7 5 1

 

// Output:
// 1
// 0

bool isCircular(Node *head)
{   
    if(head==NULL){
        return 1;
    }
   Node* temp = new Node;
   temp = head->next;
   while(temp!=NULL && temp!=head){
       temp = temp->next;
   }
   if(temp==NULL){
       return 0;
   }
   return 1;
}