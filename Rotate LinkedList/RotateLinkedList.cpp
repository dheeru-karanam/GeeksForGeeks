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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *ptr, *qtr, *temp;
        ptr = head;
        int count = 1;
        if(head==NULL || head->next == NULL){
            return head;
        }
        for(;ptr->next;ptr=ptr->next)
            count++;
        k = k%count;
        ptr=head;
        int i=0;
        for(i=0;i<k;i++,ptr=ptr->next);
        qtr = head;
        for(;ptr->next;ptr=ptr->next, qtr = qtr->next);
        ptr->next = head;
        temp = qtr->next;
        qtr->next = NULL;
        head = temp;
        return head;
    }
};