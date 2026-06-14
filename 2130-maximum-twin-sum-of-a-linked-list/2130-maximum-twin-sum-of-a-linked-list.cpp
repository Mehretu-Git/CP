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
    int pairSum(ListNode* head) {
        int max{};
        vector<int>nums = {};
        while(head){
            nums.push_back(head->val);
            head = head->next;
        }
        int left = 0;
        int right = nums.size()-1;
        while(right>left){
            int tempSum = nums[left] + nums[right];
            max = max>tempSum?max:tempSum;
            left++;
            right--;
        }
        return max;
    }
};