// Given a linked list of size N, your task is to complete the function countNodesinLoop() that checks whether a given Linked List contains loop or not and if loop is present then return the count of nodes in loop or else return 0.

// For Example:
// Size of the loop in the below linked list is 4.

// Input(to be used for Expected Output Only):
// Frist line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. The first line of each test case contains an integer N denoting the size of the linked list. Next line contains N space separated integers depecting the elements of the linked list. Last line of the test case contains an helper integer to build the loop.

// Output:
// For each test case the function must return the size of the loop in the linked list or else 0.

// Constraints:
// 1<=T<=100
// 1<=N<=500

// Example:
// Input:
// 2
// 10
// 25 14 19 33 10 21 39 90 58 45
// 4
// 2
// 1 0
// 1
// Output:
// 6
// 1

int countNodes(Node* head){
    int count = 1;
    Node* temp = head->next;
    while(temp!=head){
        temp = temp->next;
        count++;
    }
    return count;
}
int countNodesinLoop(struct Node *head)
{
    Node* slow = head;
    Node* fast = head;
    
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast){
            return countNodes(slow);
        }
    }
    
    return 0;
    
}