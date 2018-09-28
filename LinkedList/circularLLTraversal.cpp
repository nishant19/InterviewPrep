// Circular Linked List Traversal Submissions: 3348   Accuracy: 52.5%   Difficulty: Basic
        
// Given a circular linked list, your task is to complete the method printList() that prints the linked list.

// Input:
// The printList function takes a single argument as input the reference pointer to the head of the linked list.
// There are multiple test cases and for each test the function will be called separately. 

// Output:
// For each test function, Circular Linked List should print the data elements. 

// Constraints:
// 1<=T<=50
// 1<=N<=50

// Example:
// Input:
// 2
// 7
// 374 363 171 497 282 306 426
// 2
// 162 231
// Output:
// 426 306 282 497 171 363 374
// 231 162

void printList(struct Node *head)
{
    if(head==NULL){
        return;
    }
  struct Node* temp;
  temp = head;
  printf("%d ",head->data);
  temp = temp->next;
  while(temp!=head){
      printf("%d ",temp->data);
      temp  = temp->next;
  }
  return ;
  
}