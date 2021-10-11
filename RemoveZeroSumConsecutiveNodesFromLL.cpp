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
    ListNode* removeZeroSumSublists(ListNode* head) {
    ListNode* curr = head;
    int tot = 0;
    stack<ListNode*>st;
    unordered_map<int,int>mp;
    ListNode* res = nullptr;
    
    mp[0] = 1;
    while(curr){
        
        // if value of the current node is zero then dont' push it to stack.
        if(curr->val == 0)
        {
            curr = curr->next;
            continue;
        }
        
        if(st.empty())
        {
            st.push(curr);
            tot += curr->val;
            mp[tot] = 1;
            res = curr;
        }
        else
        {
            int sum = tot + curr->val;
            
            if(mp[sum] == 1)
            {
                // if sum has already found then pop the node untill tot = sum
                while(tot != sum && !st.empty())
                {
                    mp[tot] = 0; // remove sum form the map
                    tot -= st.top()->val;
                    st.pop();
                }
            }
            else
            {
                tot = sum;
                mp[tot] = 1;
                st.top()->next = curr;
                st.push(curr);
            }
        }
        
        curr = curr->next;
    }
    
    // Set next pointer of last node to null
    if(!st.empty())
        st.top()->next = nullptr;
    else
        res = nullptr;
    
    return res; 
}

};