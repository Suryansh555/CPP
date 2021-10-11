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
    bool checkPalindrome(string str){
        int p1 = 0;
        int p2 = str.size() - 1;
        while(p1 <= p2){
            if(str[p1] != str[p2]){
                return false ;
            }
            p1 ++ ;
            p2 -- ;
        }
        return true ;
    }
    bool isPalindrome(ListNode* head) {
        string check = "";
        ListNode* temp = head ;
        while(temp != NULL){
            check += temp->val ;
            temp = temp -> next ;
        }
        return checkPalindrome(check);
    }
};