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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;  // Dummy node with no meaningful data
        ListNode* currentMerged = &dummy;
        ListNode* currentList1 = list1; 
        ListNode* currentList2 = list2;

        while ((currentList1 != NULL) && (currentList2 !=  NULL)) {
            
            if (currentList1->val < currentList2->val){
                ListNode* newNode = new ListNode(currentList1->val); 
                if (currentMerged == NULL) currentMerged = newNode; 
                else  currentMerged->next = newNode; 
                currentMerged = currentMerged->next; 
                currentList1 = currentList1->next;
            }
            else if ((currentList1->val > currentList2->val)){
                ListNode* newNode = new ListNode(currentList2->val); 
                if (currentMerged == NULL) currentMerged = newNode; 
                else  currentMerged->next = newNode; 
                currentMerged = currentMerged->next; 
                currentList2 = currentList2->next;
            }

            else if (currentList1->val == currentList2->val){
                ListNode* newNode = new ListNode(currentList1->val);
                if (currentMerged == NULL) currentMerged = newNode; 
                else  currentMerged->next = newNode; 
                currentMerged = currentMerged->next; 
                ListNode* newNode1 = new ListNode(currentList2->val);
                currentMerged->next = newNode1; 
                currentMerged = currentMerged->next; 
                currentList1 = currentList1->next;
                currentList2 = currentList2->next;
            } 
        }

        if (currentList1 != NULL)   currentMerged->next = currentList1;  
        else if (currentList2 != NULL)   currentMerged->next = currentList2;  
        
        return (&dummy)->next; 
    }
};