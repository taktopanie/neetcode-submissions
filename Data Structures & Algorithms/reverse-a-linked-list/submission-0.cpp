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
    stack <ListNode*> next_ptrs;
    ListNode* Start_Ptr = nullptr;
public:
    ListNode* reverseList(ListNode* head) {

        if(head == nullptr)
        {
            return head;
        }

        while(head->next != nullptr)
        {
            next_ptrs.push(head);
            head = head->next;
        }
        
        Start_Ptr = head;

        while(next_ptrs.empty() == false)
        {
            head->next = next_ptrs.top();
            next_ptrs.pop();
            head = head->next;
        }

        head->next=nullptr;

        return Start_Ptr;
    }
};
