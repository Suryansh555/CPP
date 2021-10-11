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
    int Count(ListNode* head){
        ListNode * temp =  head ;
        
        int count = 0 ;
        while(temp != NULL){
            temp = temp -> next ;
            count++;
        }
        return count ;
    }
    ListNode* revk(ListNode* head , int B , int count){
        ListNode* MainTail = NULL ;
        ListNode* New = NULL ;
        int revcount = 0 ;
        while(head!= NULL){
        ListNode *Reversehead = NULL ;
        ListNode* tail = head;
        int c = 0 ;
        if(count - revcount < B){
            if(New == NULL){
                return head ; 
            }
                MainTail -> next = tail ; 
                return New ;  
            }
        while(head != NULL && c < B){
            ListNode * temp = head;
            head = head -> next ;
            temp -> next = Reversehead ;
            Reversehead = temp ;
            revcount++;
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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = Count(head);
        return revk(head,k,count);
        
    }
};