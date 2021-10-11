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
ListNode* partition(ListNode* A, int B) {
    ListNode* Greater = NULL ;
    ListNode* Smaller = NULL ;
    ListNode* temp = A ; 
    ListNode* SmallerTemp;
    ListNode* GreaterTemp;
    while(temp != NULL){
        ListNode* curr =  temp ;
        if(temp -> val < B){
            if(Smaller == NULL){
                Smaller = new ListNode((temp -> val)) ;
                Smaller -> next = NULL ;
                SmallerTemp = Smaller ;
            }
            else{
                SmallerTemp -> next = curr ;
                SmallerTemp = SmallerTemp -> next ;
            }
            
        }
        else{
            if(Greater == NULL){
                Greater = new ListNode((temp -> val)) ;
                Greater -> next = NULL ;
                GreaterTemp = Greater ;
            }
            else{
                GreaterTemp -> next =  curr ;
                GreaterTemp = GreaterTemp -> next ;
            }
        }
        temp =  temp -> next ;
        curr -> next = NULL ;
    }
    if(Smaller == NULL){
        return Greater;
    }
    else{
        SmallerTemp -> next =  Greater ;
        return Smaller ;
    }
} 
