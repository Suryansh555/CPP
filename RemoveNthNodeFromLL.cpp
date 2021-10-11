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

ListNode* removeNthFromEnd(ListNode* A, int B) {
        ListNode* first = A;
        ListNode* second = A;
        for(int i=1;first!= NULL && i<=B;i++){
            first = first->next;
        }
        if(first == NULL){
            return A->next;
        }
        while(first -> next !=NULL){
            first = first -> next;
            second = second -> next;
        }
        ListNode *deleted = second -> next ;
        second->next = second->next->next;
        delete(deleted);
        
        return A;
    
}
