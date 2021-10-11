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
ListNode* deleteDuplicates(ListNode* A) { ;
    ListNode * NEW = A ;
    ListNode * curr = NEW ;
    A = A -> next ;
    ListNode * temp = A ; 
    curr -> next = NULL ;
    while(temp != NULL){
        if(curr -> val ==  temp -> val){
            while((temp != NULL) && ((temp -> val) == (curr -> val))){
                temp = temp -> next ;
            }
        }   

            curr -> next = temp ;
            if(temp != NULL){
            temp = temp -> next ;    
            }
            
            curr = curr -> next ;
            curr -> next == NULL ;


}
return NEW ;
}
