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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* mid = head;
        ListNode* test = head->next;
        ListNode* prev = NULL;
        if(head->next==NULL){
            return NULL;
        }
        while(test!=NULL){
            prev=mid;
            mid=mid->next;
            test=test->next;
            if(test!=NULL) test=test->next;
        }
        prev->next = mid->next;
        mid->next=NULL;
        delete(mid);
        return head;
    }
};
