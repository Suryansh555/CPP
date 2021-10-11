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
ListNode* solve(vector<vector<int> > &A) {
  ListNode* Head = NULL ;
  int SizeofLL = 0 ;
    for(int i = 0 ; i < A.size() ; i++){
        if(A[i][0] == 0 ){
            if(Head == NULL){
                Head = new ListNode(A[i][1]);
            }
            else{
                ListNode* temp = new ListNode(A[i][1]) ;
                temp -> next  =  Head ;
                Head = temp ;
            }  
            SizeofLL++;
        }
        else if(A[i][0] == 1){
            if(Head == NULL){
                Head = new ListNode(A[i][1]);
            }
            else{
                ListNode* temp = new ListNode(A[i][1]) ;
                ListNode* curr = Head ;
                while(curr -> next != NULL){
                    curr = curr -> next ;
                }
                curr -> next = temp ;
            }
            SizeofLL++;
        }
        else if(A[i][0] == 2){
            int index = A[i][2];
            int value = A[i][1];
            if(index <= SizeofLL || index > -1 ){
                
                
                ListNode * temp = new ListNode(value);
                if(index == 0){
                    temp -> next = Head ;
                    Head = temp ;
                    SizeofLL++;
                    continue;
                }
                ListNode * curr = Head ;
                for(int i = 1 ; i < index  ; i++ ){
                    curr =  curr -> next ;
                }
                temp -> next = curr -> next ;
                curr -> next = temp ;
                SizeofLL++;
            }
        }
        else{
            int index = A[i][1];
            if(SizeofLL == 0){
                continue ;
            }
             if(index < SizeofLL || index > -1 ){
                 if(index == 0){
                     Head = Head -> next ;
                     SizeofLL--;
                     continue ;
                 }
                  ListNode * curr = Head ;
                  for(int i = 1 ; i < index ; i++ ){
                    curr =  curr -> next ;
                    }
                    ListNode* temp = curr -> next ;
                    curr -> next = curr -> next -> next ;
                    delete(temp);
                    SizeofLL--;
                    
            }
        }
    }
    return  Head ;
}
