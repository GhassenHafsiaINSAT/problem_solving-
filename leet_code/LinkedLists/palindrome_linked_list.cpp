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
    bool isPalindrome(ListNode* head) {
        ListNode* current = head; 
        while ((current->next != NULL) && (current != NULL))
        {
            ListNode* runner = current->next;
            ListNode* prev = current; 
            
            while (runner->next != NULL){
                prev =  prev->next; 
                runner = runner->next; 
                
            } 

            if (runner->val != current->val) return false;
            prev->next = NULL; 
            current = current->next; 

        }
        return true; 
    }
};

// O(n) time and O(1) space

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;

        ListNode *slow = head, *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev = nullptr, *current = slow, *next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        ListNode *firstHalf = head, *secondHalf = prev;
        while (secondHalf != nullptr) {
            if (firstHalf->val != secondHalf->val) {
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};
