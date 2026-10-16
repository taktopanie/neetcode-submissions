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

    ListNode* prev_Ptr = nullptr;
public:
    ListNode* reverseList(ListNode* head) {

        if(head == nullptr)
        {
            return head;
        }

        while(head != nullptr)
        {
            ListNode* next_Ptr= head->next;
            head->next = prev_Ptr;
            prev_Ptr = head;
            head = next_Ptr;
        }
        

        return prev_Ptr;
    }
};
