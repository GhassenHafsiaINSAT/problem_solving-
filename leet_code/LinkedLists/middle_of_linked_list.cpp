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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head; 
        int i=1; 
        while (current != NULL)
        {
            i++; 
            current = current->next; 
        }
        int target = i/2 + 1; 

        ListNpde* temp  = head; 
        while(i<target-1){
            temp=temp->next;
            i++;
        }
        return temp;  
        }
    };