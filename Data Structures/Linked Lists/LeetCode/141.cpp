/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <set>
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        std::set<ListNode*> mySet;
        for(;temp!=nullptr;temp=temp->next){
            if (mySet.find(temp) != mySet.end()) {
                return true;
}
else{
    mySet.insert(temp);
}
        }
        return false;
    }
};