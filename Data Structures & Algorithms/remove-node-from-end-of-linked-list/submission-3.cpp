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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* slow=head;
            ListNode* fast=head;

            for(int i=0;i<n;i++){
                fast=fast->next;
            }

            while(fast && fast->next!=nullptr){
                slow=slow->next;
                fast=fast->next;
            }


            if(fast==nullptr){

            ListNode* newNode=head->next;
            free(head);
            return newNode;
            }

            else{
                ListNode* temp=slow->next;
                slow->next=temp->next;
                free(temp);
                return head;
            }

    }
};
