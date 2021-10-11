/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    if(A == NULL){
        return B ;
    }
    if(B == NULL){
        return A ;
    }
    ListNode * ll1 = A ;
    ListNode * ll2 = B ;
    ListNode* New = NULL ;
    ListNode* curr = New ;
    while(ll1 != NULL && ll2 != NULL){
        if((ll1 -> val) <= (ll2 -> val)){
            if(New == NULL){
                New = ll1 ;
                curr = New ;
            }
            else{
                curr -> next = ll1 ;
                curr = curr -> next ;
            }
            ll1 = ll1 -> next ;
        }
        else{
            if(New == NULL){
                New = ll2 ;
                curr = New ;
            }
            else{
                curr -> next = ll2 ;
                curr = curr -> next ;
            }
            ll2 = ll2 -> next ;
        }
    }
    if(ll1 != NULL){
        curr -> next = ll1 ;
        curr = curr -> next ;
    }
    if(ll2 != NULL){
        curr -> next = ll2 ;
        curr = curr -> next ;
    }
    return New ;
    
}
