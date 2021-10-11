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
ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* Atemp = A ;
    ListNode * Btemp = B;
    ListNode * NewLL = NULL ;
    if(Atemp == NULL){
        return Btemp ;
    }
    if(Btemp == NULL){
        return Atemp ;
    }
    ListNode * temp = NULL ;
    ListNode * curr = NULL ;
    while((Atemp != NULL) && (Btemp != NULL)){
        
        if((Atemp -> val) <= (Btemp -> val)){
            temp = Atemp ;
            if(NewLL == NULL){
                NewLL = new ListNode((Atemp -> val));
                curr = NewLL ;
            }
            else{
                curr -> next = Atemp ;
                curr = curr -> next ;
            }
            Atemp = Atemp -> next ;
        }
        else{
            temp = Btemp ;
            if(NewLL == NULL){
                NewLL = new ListNode((Btemp -> val));
                curr = NewLL ;
            }
            else{
                curr -> next = Btemp ;
                curr = curr -> next ;
            }
            Btemp = Btemp -> next ;
           
        }
         temp -> next = NULL ;
    }
    if(Atemp != NULL){
        curr -> next = Atemp ;
    }
    if(Btemp != NULL){
        curr -> next = Btemp;
    }
    return NewLL;
}
