#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
class Node { 
    public:
        int val; 
        Node* next; 
}; 
 
// Function to sort a linked list of 0s, 1s and 2s 
void sortList(Node *head) { 
    int count[3] = {0, 0, 0}; // Initialize count of '0', '1' and '2' as 0 
    Node *curr = head; 
 
    // count total number of '0', '1' and '2' 
    while (curr != NULL) { 
        count[curr -> val] += 1; 
        curr = curr -> next; 
    } 
 
    int i = 0; 
    curr = head; 
 
    /*
    * now start traversing list from head node, 
    * 1) fill the list with 0, till n1 > 0 
    * 2) fill the list with 1, till n2 > 0 
    * 3) fill the list with 2, till n3 > 0 */
    while (curr != NULL) { 
        if (count[i] == 0) 
            i++; 
        else { 
            curr -> val = i; 
            count[i]--; 
            curr = curr -> next; 
        } 
    } 
} 