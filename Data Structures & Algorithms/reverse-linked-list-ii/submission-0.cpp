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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode();
        dummy->next=head;

        ListNode* leftPre= dummy;
        ListNode* curr= head;

        for(int i=0;i<left-1;i++){
            leftPre=leftPre->next;
            curr=curr->next;
        }

        ListNode* leftSubHead= curr;

        ListNode* preNode= nullptr;

        for(int i=0;i<=right-left;i++){
            ListNode* nextHead= curr->next;
            curr->next=preNode;
            preNode=curr;
            curr=nextHead;
        }

        leftPre->next=preNode;
        leftSubHead->next=curr;
    return dummy->next;
    }

};