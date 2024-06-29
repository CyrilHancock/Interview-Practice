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
    ListNode* middleNode(ListNode* head) {
       ListNode* temp=nullptr;
       int count=0;
       for(temp=head;temp!=nullptr;temp=temp->next){
            count++;
       }
       temp=head;
       for(int j=0;temp!=nullptr;temp=temp->next){
        if(j>=count/2){
            return temp;
        }
        j++;
       }
       return nullptr;
    }
};