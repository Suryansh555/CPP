#include<bits/stdc++.h>
using namespace std ;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
ListNode* solve(ListNode* A, int B) {
    ListNode * temp = A ;
    while(temp != NULL){
        int curr = (temp -> val) % B ;
        if(curr != 0){
            temp -> val = (temp -> val) + (B - curr); 
        }
        temp = temp -> next ;
    }
    return A ;
}
