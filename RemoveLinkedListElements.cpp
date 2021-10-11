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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * New = NULL;
        ListNode * curr = NULL ;
        ListNode * temp = head ;
        while(temp !=  NULL){
            
            if((temp -> val) != val) {
                if(New == NULL){
                    New = temp ;
                    curr = New ;
                    temp =  temp -> next ;
                    curr -> next = NULL; 
                }
                else{
                    curr -> next = temp ;
                    temp =  temp -> next ;
                    curr = curr -> next ;
                    curr -> next = NULL; 
                }
            }
            else{
                temp = temp -> next ;
            }
        }
        return New;
    }
};