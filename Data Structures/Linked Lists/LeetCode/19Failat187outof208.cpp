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
        ListNode* temp=head;
        int count=0;
        for(;temp!=nullptr;temp=temp->next){
            count++;
        }
        temp=head;
        ListNode* deleteNode=nullptr;
        if(count==1){
            return deleteNode;
        }
        for(int j=0;temp!=nullptr;temp=temp->next){
            if(j==count-n-1){
                deleteNode=temp->next;
                temp->next=temp->next->next;
                deleteNode->next=nullptr;
                delete deleteNode;
            }
            j++;
        }
        return head;
    }
};