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
    int numComponents(ListNode* head, vector<int>& nums) {
      unordered_set<int>s;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        int c=0,f=0;
        while(head!=NULL){
            if(s.find(head->val)!=s.end()){
                if(!f)
                    f=1;
            }
            else{
                if(f){
                    c++;
                    f=0;
                }
            }
            head=head->next;
        }
        if(f)
            c++;
        return c;
    }

};