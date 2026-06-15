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
        ListNode dummy(0,head);
        ListNode* slow = &dummy;
        ListNode* fast = head;
        if(head->next == nullptr) 
            return nullptr;

        while((fast!=nullptr) && (fast->next!=nullptr)){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        toDelete->next = nullptr;
        delete toDelete;
        return head;
        
    }
};