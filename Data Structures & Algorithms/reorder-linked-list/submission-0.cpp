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
    vector <int> my_val;
    void reorderList(ListNode* head) {

        if(head == nullptr)
            return;

        ListNode *save_begin = head;

        while(head != nullptr)
        {
            my_val.push_back(head->val);
            head = head->next;
        }

        auto p1 = 0;
        auto p2 = my_val.size()-1;

        bool p = true;

        while(save_begin!=nullptr)
        {  
            if(p)
            {
                save_begin->val = my_val[p1];
                p1++;
                p=false;
            }
            else 
            {
                save_begin->val = my_val[p2];
                p2--;
                p=true;
            }
            save_begin = save_begin->next;
        }

    }
};
