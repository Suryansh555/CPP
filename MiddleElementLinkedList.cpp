
#include<bits/stdc++.h>

struct ListNode
{
    int val ;
    ListNode * next ;
};



int middleElement(ListNode * head) {
    // IF ONLY A SINGLE ELEMENT
    if (head -> next == NULL)
        return head -> val;
    // slow and fast pointer
    ListNode * slow = head;
    ListNode * fast = head;
    while (fast && fast -> next) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow -> val;
}

int solve(ListNode * A) {
    return middleElement(A);
}