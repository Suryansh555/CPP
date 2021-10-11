/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include<bits/stdc++.h>
using namespace std ;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* Reverse(ListNode* head , int k){
        ListNode * ReverseHead = NULL ;
        ListNode * Tail = head ;
        int c = 0 ;
        while(c < k){
            ListNode * temp = head ;
            head = head -> next ;
            temp -> next = ReverseHead ;
            ReverseHead = temp ; 
            c++;
        }
        Tail -> next = head ;
        return ReverseHead ;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(right == left){
            return head ;
        }
        if(head == NULL){
            return head ;
        }
        
        // Iterate to left-1
        
        int val = 1 ;
        ListNode* temp = new ListNode() ;
        ListNode *temp1 = temp ;
        temp -> next = head ;
        
        while(val < left){
            temp1 = temp1 -> next ;  
            val++;
        }
        temp1 -> next = Reverse(temp1 -> next , right-left + 1 ) ;
        return temp -> next  ;
    }
};