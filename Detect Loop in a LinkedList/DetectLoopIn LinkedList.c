/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *ptr, *qtr;
    ptr = head;
    qtr = head;
    while(ptr && ptr->next){
        ptr = ptr->next->next;
        qtr = qtr->next;
        if(ptr==qtr){
            return 1;
        }
    }
    return 0;
}