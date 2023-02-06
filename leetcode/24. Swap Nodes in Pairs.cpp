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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = dummy;
        while(cur->next != nullptr && cur->next->next != nullptr){
            ListNode* temp = cur->next;
            ListNode* temp1 = cur->next->next->next;

            cur->next = cur->next->next;
            cur->next->next = temp;
            cur->next->next->next = temp1;
            cur = cur->next->next;
        }
        return dummy->next;
    }
};