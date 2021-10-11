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
 
 
 ListNode* PrevmiddleElement(ListNode* head) {
    if (head -> next == NULL)
        return head ;
    ListNode * slow = head;
    ListNode * fast = head;
    ListNode * prev = head ;
    while (fast && fast -> next) {
        fast = fast -> next -> next;
        prev = slow ; 
        slow = slow -> next;
    }
    return prev ; 
}

ListNode* Reverse(ListNode* head){
    if(head == NULL){
        return head ;
    }
    ListNode *Reversehead = NULL ;
    while(head != NULL ){
        ListNode * temp = head;
        head = head -> next ;
        temp -> next = Reversehead ;
        Reversehead = temp ;
 }
    return Reversehead;
        
}

ListNode* Merge(ListNode* First , ListNode* Second){
    ListNode * New = First ;
    ListNode* curr = New ;
    ListNode * F = First -> next ;
    ListNode * S = Second ;
    while(S != NULL && F != NULL){
        curr -> next = S;
        S = S -> next ;
        curr = curr -> next ;
        curr -> next = F ;
        F = F -> next ;
        curr = curr -> next ;
        
        
    }
    if(S != NULL){
        curr -> next = S ;
        curr = curr -> next;
    }
    if(F != NULL){
        curr -> next = F ;
        curr = curr -> next;
    }
    if(curr){
        curr -> next = NULL;
    }
    return New ;
}

ListNode* reorderList(ListNode* A) {
    if(A == NULL || A -> next == NULL){
        return A ;
    }
    ListNode * PrevMiddle = PrevmiddleElement(A);
    ListNode * Right = PrevMiddle -> next  ;
    ListNode * Left = A ;
    ListNode * RevRight = Reverse(Right);
    return Merge(Left , RevRight);
}
