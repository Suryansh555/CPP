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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL){
            return NULL ;
        }
        ListNode * slow = head ;
        ListNode * fast = head ;
        while(fast -> next != NULL && fast -> next -> next != NULL){
            fast = fast -> next -> next ;
            slow = slow -> next ;
        }
        return slow ;
    }
    
    ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    if(A == NULL){
        return B ;
    }
    if(B == NULL){
        return A ;
    }
    ListNode * ll1 = A ;
    ListNode * ll2 = B ;
    ListNode* New = NULL ;
    ListNode* curr = New ;
    while(ll1 != NULL && ll2 != NULL){
        if((ll1 -> val) <= (ll2 -> val)){
            if(New == NULL){
                New = ll1 ;
                curr = New ;
            }
            else{
                curr -> next = ll1 ;
                curr = curr -> next ;
            }
            ll1 = ll1 -> next ;
        }
        else{
            if(New == NULL){
                New = ll2 ;
                curr = New ;
            }
            else{
                curr -> next = ll2 ;
                curr = curr -> next ;
            }
            ll2 = ll2 -> next ;
        }
    }
    if(ll1 != NULL){
        curr -> next = ll1 ;
        curr = curr -> next ;
    }
    if(ll2 != NULL){
        curr -> next = ll2 ;
        curr = curr -> next ;
    }
    return New ;
    
}   
    ListNode * MergeSort(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head ;
        }
        ListNode * c1 = middleNode(head);
        ListNode * c2 = c1 -> next ;
        c1 -> next = NULL ;
        ListNode * h1 = MergeSort(head);
        ListNode * h2 = MergeSort(c2);
        return mergeTwoLists(h1,h2);
    }
    
    ListNode* sortList(ListNode* head) {
        return MergeSort(head);
        
    }
};