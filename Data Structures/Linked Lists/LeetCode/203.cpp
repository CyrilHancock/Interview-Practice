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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* dummy=new ListNode(-1);
        ListNode* ans=dummy;
        while(temp!=NULL){
            if(temp->val!=val){
                 ListNode* n=new ListNode(temp->val);
                 dummy->next=n;
                 dummy=dummy->next;
            }
            temp=temp->next;
        }
        return ans->next;
    }
};