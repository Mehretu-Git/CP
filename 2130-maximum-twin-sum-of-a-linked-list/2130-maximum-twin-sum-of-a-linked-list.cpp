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
    ListNode* reverseList(ListNode* head){
        ListNode *curr = head, *prev = nullptr, *next;
        while (curr != nullptr) {

            // Store next
            next = curr->next;

            // Reverse current node's next pointer
            curr->next = prev;

            // Move pointers one position ahead
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        int max{};
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* mid  = reverseList(slow->next);

        ListNode* twin1 = head;
        ListNode* twin2 = mid;
        while(twin2){
            int twinSum = twin1->val + twin2->val;
            max = twinSum>max?twinSum:max;
            twin1 = twin1->next;
            twin2 = twin2->next;
        }
        return max;
    }
};