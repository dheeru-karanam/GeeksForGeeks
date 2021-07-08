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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode *ptr1_1, *ptr2_1;
        int temp=0;
        ptr1_1 = (struct ListNode *)malloc(sizeof(struct ListNode));
        ptr2_1 = (struct ListNode *)malloc(sizeof(struct ListNode));
        int length1 = 0, length2=0;
        ptr1_1 = l1;
        ptr2_1 = l2;
        while(ptr1_1->next){
            length1+=1;
            ptr1_1 = ptr1_1->next;
        }
        length1++;
        while(ptr2_1->next){
            length2+=1;
            ptr2_1 = ptr2_1->next;
        }
        length2++;
        if(length1>length2){
            for(int i=length2;i<length1;i++){
                struct ListNode *temp_L = new ListNode();
                temp_L->val = 0;
                temp_L->next = NULL;
                ptr2_1->next = temp_L;
                ptr2_1 = ptr2_1->next;
            }
        }
        else if(length2>length1){
            for(int i=length1;i<length2;i++){
                struct ListNode *temp_L = new ListNode();
                temp_L->val = 0;
                temp_L->next = NULL;
                ptr1_1->next = temp_L;
                ptr1_1 = ptr1_1->next;
            }
        }
        ptr2_1 = l2;
        ptr1_1 = l1;
        while(ptr1_1){
            temp  = temp + (ptr1_1->val) + ptr2_1->val;  
            ptr2_1->val = temp%10;
            temp = temp/10;
            ptr1_1 = ptr1_1->next;
            ptr2_1 = ptr2_1->next;
        }
        ptr2_1 = l2;
        while(ptr2_1->next){
            ptr2_1 = ptr2_1->next;
        }
        if(temp!=0){
            struct ListNode * tempL = new ListNode();
            tempL->val = temp;
            tempL->next = NULL;
            ptr2_1->next = tempL;
        }
        return l2;
    }
};