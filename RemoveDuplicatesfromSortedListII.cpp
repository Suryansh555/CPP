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
ListNode* deleteDuplicates(ListNode* A) {
        ListNode* temp = A;
        ListNode* curr = NULL;
        ListNode* newhead = NULL;
        while(temp){
            if(temp->next == NULL or temp->val != temp->next->val){
                if(curr == NULL){
                    curr = temp;
                    newhead = temp;
                }
                else{
                    curr->next = temp;
                    curr = temp;
                }
                temp = temp->next;
            }
            else{
                ListNode* temp1 = temp;
                while(temp1 and temp1->val == temp->val) temp1 = temp1->next;
                temp = temp1;
            }
        }
        if(curr) curr->next = NULL;
        return newhead;
    }

