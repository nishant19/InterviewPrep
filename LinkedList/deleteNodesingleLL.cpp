// Delete xth node from a single linked list. Your task is to complete the method deleteNode which takes two arguments:  the address of the head of the linked list and an integer x. The function returns the head of the  modified linked list.
 

// Input:
// The first line of input contains an element T, denoting the no of test cases. Then T test cases follow. Each test case contains three lines. The first line of each test case contains an integer N denoting the no of elements of the linked list. Then in the next line are N space separated values of the linked list. The third line of each test case contains an integer x.

// Output:
// The output for each test case will be the space separated value of the returned linked list.

// Constraints:
// 1<=T<=300
// 2<=N<=100
// 1<=x<=N

Node* deleteNode(Node *head,int x)
{
    if(x==1){
        Node* ahead = head->next;
        head->next = NULL;
        head = ahead;
        return ahead;
    }
    int length = 0;
    Node* temp2 = head;
    while(temp2!= NULL){
        temp2 = temp2->next;
        length++;
    }
    
    if(x==length){
        Node* temp1 = head;
        int j=1;
        while(j<length-1){
            temp1 = temp1->next;
            j++;
        }
        Node* nex = temp1->next;
        temp1->next = NULL;
        nex->next = NULL;
        return head;
    }
    
    int i=1;
    Node* temp  = head;
    while(i<x-1){
        temp = temp->next;
        i++;
    }
    Node* next = temp->next->next;
    temp->next->next = NULL;
    temp->next = next;
    
    return head;
    
    
    
}

