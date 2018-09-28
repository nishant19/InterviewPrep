// Delete a node from given position in a doubly linked list.

// Input:

// In this problem, method takes two argument: the address of the head of the linked list and the node you have to delete . The function should not read any input from stdin/console.
// The Node structure has a data part which stores the data and a next pointer which points to the next element of the linked list. 
// There are multiple test cases. For each test case, this method will be called individually.

// Output:

// Delete the node from the given doubly linked list and set *head_ref if required .

// Constraints:
// 1<=T<=300
// 2<=N<=100
// 1<=x<=N

// Example:

// Input:
// 2
// 3                        //Size of Linked List
// 1  3 4                 //Elements of Linked List
// 3                        //Location of element to be deleted
// 4
// 1 5 2 9                    
// 1

// Output:
// 1 3           
// 5 2 9

int getLength(Node* head){
    int c = 0;
    while(head!=NULL){
        head = head->next;
        c++;
    }
    return c;
}
void deleteNode(Node **head_ref, int x)
{
    // first element
    Node* head = new Node;
    
    head = *head_ref;
    int length = getLength(head);
    
    if(x>length || x<0){
        return;
    }
    
    if(head==NULL){
        return;
    }
    if(x==1){
        Node* after = head->next;
        head->next = NULL;
        head->prev = NULL;
        after->prev = NULL;
        *head_ref = after;
        return;
    }
    
    Node* temp = new Node;
    temp = head;
    int i=1;
    
    while(i<x-1){
        temp = temp->next;
        i++;
    }
    
    Node* target = temp->next;
    Node* after = target->next;
    temp->next = after;
    if(after!=NULL){
        after->prev = temp;
    }
    target->prev =  NULL;
    target->next = NULL;
    
    return;
    
}