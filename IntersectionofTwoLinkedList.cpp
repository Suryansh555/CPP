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
    int LengthofLL(ListNode* A){
     ListNode * temp = A ;
     if(A == NULL){
         return NULL;
     }
     int count = 0 ;
     while(temp != NULL){
         count++;
         temp =  temp -> next ;
     }
     return count ;
 }
 bool check(ListNode * First , ListNode * Second){
     ListNode* curr1 = First ;
     ListNode* curr2 = Second ;
     while(curr1 != NULL && (curr1 -> val == curr2 -> val)  ){
         curr1 = curr1 -> next ;
         curr2 = curr2 -> next ;
     }
     if(curr1 != NULL){
         return false ;
     }
     else{
         return true;
     }
     }
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
            int length1 = LengthofLL(A);
    int length2 = LengthofLL(B);
        int diff = abs(length1 - length2);
    if(A == NULL || B == NULL){
        return NULL ;
    }
    ListNode * temp1 = A ;
    ListNode * temp2 = B ;
    if(length1 > length2){
        while(diff >  0){
            temp1 = temp1 -> next ;
            diff--;
        }
    }
    if(length2 > length1){
        while(diff >  0){
            temp2 = temp2 -> next ;
            diff--;
        }
    }
    while(temp1 != NULL && temp2 != NULL){
        if(temp1  == temp2 ){
            return temp1;
        }
        temp1 = temp1 -> next ;
        temp2 = temp2 -> next ;
    }
    return NULL;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 

