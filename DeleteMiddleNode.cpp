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
ListNode* solve(ListNode* A) {
    if(A == NULL || A -> next == NULL){
        return NULL;
    }
    int number = 0 ;
    ListNode* temp = A;
    while(temp != NULL){
        temp = temp -> next ;
        number++ ;
    }
    int mid ;
    if(number % 2 != 0){
        mid = (number + 1)/2;
    }
    else{
        mid = (number/2) + 1 ;
    }
    temp = NULL;
    int count = 1;
    ListNode * prev = A;
    while (count < mid - 1) {
        prev = prev -> next;
            count++;
        }
    temp = prev -> next;
    prev -> next = prev -> next -> next;
    delete(temp);
    return A ;
}
