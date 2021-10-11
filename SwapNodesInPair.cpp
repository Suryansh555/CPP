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
    ListNode* SwapNodes(ListNode* head , int k){
        if(head == NULL || head -> next == NULL){
            return head ;
        }
        ListNode* ReverseHead = NULL ;
        ListNode * tail = head ;
        int c = 0 ;
        while( head != NULL && c < k){
            ListNode * Temp = head ; 
            head = head -> next ;
            Temp -> next = ReverseHead ;
            ReverseHead = Temp ;
            c++;
        }
        tail -> next = SwapNodes(head,k);
        return ReverseHead ;
    }
    ListNode* swapPairs(ListNode* head) {
        return SwapNodes(head,2);
    }
};