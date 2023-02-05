/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* ptr1,* ptr2,* ptr3;
    unsigned int num1 = 0,num2 = 0,num3,k = 1,rem;
    ptr1 = l1;
    ptr2 = l2;
    while(ptr1 != NULL){
        num1 += (ptr1->val)*k;
        k *= 10;
        ptr1 = ptr1->next;
    }
    k = 1;
    while(ptr2 != NULL){
        num2 += (ptr2->val)*k;
        k *= 10;
        ptr2 = ptr2->next;
    }
    num3 = num1 + num2;
    struct ListNode* l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* new;
    ptr3 = l3;
    if(num3 == 0){
        l3->val = num3;
        l3->next = NULL;
    }
    while(num3 != 0){
        rem = num3 % 10;
        ptr3->val = rem;
        num3 /= 10;
        if(num3 != 0){
            new = (struct ListNode *)malloc(sizeof(struct ListNode));
            ptr3->next = new;
            ptr3 = new;
        }
        else{
            new = NULL;
            ptr3->next = new;
            ptr3 = new;
        }
    }
    
    return l3;
}
