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

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         if(head == NULL){
            return NULL ;
        }
        ListNode * slow = head ;
        ListNode * fast = head ;
        int cycle = 0 ;
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next ;
            fast = fast -> next -> next ;
            if(slow == fast){
                cycle = 1 ;
                break ;
            }
        }
        if(cycle == 0){
            return NULL ;
        }
        fast = head ;
        while(fast != slow){
            fast = fast -> next ;
            slow = slow -> next ;
        }
        return slow ;
    }
};