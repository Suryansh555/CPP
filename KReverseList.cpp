/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include<bits/stdc++.h>
using namespace std ;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
 ListNode* revk(ListNode* head , int B){
    if(head == NULL){
        return head ;
    }
    ListNode *Reversehead = NULL ;
    ListNode* tail = head;
    int c = 0 ;
    while(head != NULL && c < B){
        ListNode * temp = head;
        head = head -> next ;
        temp -> next = Reversehead ;
        Reversehead = temp ;
        c++;
 }
    tail -> next = revk(head,B);
    return Reversehead;
        
    }

    
ListNode* reverseList(ListNode* head, int B) {
    return revk(head,B);
}
