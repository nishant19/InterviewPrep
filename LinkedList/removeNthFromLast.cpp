// Given a linked list, remove the nth node from the end of list and return its head.

// For example,
// Given linked list: 1->2->3->4->5, and n = 2.
// After removing the second node from the end, the linked list becomes 1->2->3->5.

//  Note:
// If n is greater than the size of the list, remove the first node of the list.
// Try doing it using constant additional space.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int size = 0;
    ListNode* temp = A;
    while(temp!=NULL){
        temp = temp->next;
        size++;
    }
    
    if(size==1){
        return NULL;
    }
    
    if(B>size){
        ListNode* temp2 = A;
        temp2 = temp2->next;
        return temp2;
    }
    
    else if(size==B){
        ListNode* temp3 = A;
        temp3 = temp3->next;
        return temp3;
    }
    
    else{
        ListNode* temp3 = A;
        int pos = 1;
        
        while(pos<size-B){
            temp3 = temp3->next;
            pos++;
        }
        
        ListNode* remaining = (temp3->next)->next;
        // (temp3->next)->next = NULL;
        temp3->next = remaining ;
        return A;
    }
}
