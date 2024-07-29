#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        };

        ListNode *prev = NULL;
        while(slow) {
            ListNode *next = slow -> next;
            slow -> next = prev;
            prev = slow;
            slow = next;
        }
        ListNode *curr = head;
        while(prev && prev -> next) {   
            ListNode *next1 = curr -> next;
            ListNode *next2 = prev -> next;
            curr -> next = prev;
            prev -> next = next1;
            curr = next1;
            prev = next2;
        }
    }
};