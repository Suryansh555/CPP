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
ListNode* revk(ListNode* head , int B){
    ListNode* MainTail = NULL ;
    ListNode* New = NULL ;
    while(head!= NULL){
    ListNode *Reversehead = NULL ;
    ListNode* tail = head;
    int c = 0 ;
    while(head != NULL && c < B){
        ListNode * temp = head;
        head = head -> next ;
        temp -> next = Reversehead ;
        Reversehead = temp ;
        c++;
 }  
    if(New == NULL){
        New = Reversehead ;
        MainTail = tail ;
    }
    else{
        MainTail -> next = Reversehead;
        MainTail = tail ;
    }
    // tail -> next = revk(head,B);
    }
    return New;
}
ListNode* swapPairs(ListNode* A) {
    return revk(A,2);
}
