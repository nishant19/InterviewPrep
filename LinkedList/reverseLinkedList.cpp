// Given pointer to the head node of a linked list, the task is to reverse the linked list.

// Input:
// You need to complete a method reverse() that takes head as argument and returns new head.
// There are multiple test cases. For each test case, this method will be called individually.  The first line of input contains number of test cases.  Every test case has two lines, number of nodes first line and data values in next line.

// Output:
// Reverse the linked list and return head of the modified list.


// Example:
// Input:
// 1
// 6
// 1 2 3 4 5 6

// Output:
// 6 5 4 3 2 1

Node* reverse(Node *head)
{
  Node* prev = NULL;
  Node* current = head;
  
  while(current!=NULL){
      Node* next = current->next;
      current->next = prev;
      prev = current;
      current = next;
  }
  return prev;
}