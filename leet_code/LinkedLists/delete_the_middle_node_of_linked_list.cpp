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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* current = head; 
        int nb = 0;
        int newPos = 1;
        while (current != NULL){
            nb++; 
            current = current->next; 
        } 
    if (nb == 1) return NULL; 
    newPos = nb/2; 
    ListNode* prev = head; 
    ListNode* target  = head->next; 

    int j = 0; 
    while ( j < newPos-1){
        prev = prev->next; 
        target  = target->next; 
        j++; 
    }
    if (target-> next == NULL) prev->next = NULL; 
    else prev->next = target->next; 
    delete target; 
    return head; 
    }
};