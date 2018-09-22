            
// Given a singly linked list of integers, Your task is to complete the function isPalindrome that returns true if the given list is palindrome, else returns false.

// Input:
// The first line of input contains an integer T denoting the no of test cases. Then T testcases follow. Each test case contains 2 line the first line of each test case contains an integer N denoting the size of the linked list. The next line contains N space separated integers denoting the values of the nodes of the linked list.

// Output:
// For each test case output will be 1 if the linked list is a palindrome else 0.

// Constraints:
// 1<=T<=1000
// 1<=N<=50

// Example(To be used only for expected output):
// Input
// 2
// 3
// 1 2 1
// 4
// 1 2 3 4

// Output:
// 1
// 0

#include <stack>
bool isPalindrome(Node *head)
{
    Node* temp = new Node;
    temp = head;
    int length = 0;
    while(temp!=NULL){
        temp = temp->next;
        length++;
    }
    int mid = length/2;
    
    stack <int> s;
    for(int i=0;i<mid;i++){
        s.push(head->data);
        head = head->next;
    }
    if(length%2!=0){
        head = head->next;
    }
    while(head!=NULL && head->data == s.top()){
        s.pop();
        head= head->next;
    }
    if(s.empty()){
        return 1;
    }
    return 0;
    
}