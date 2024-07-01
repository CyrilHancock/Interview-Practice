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
 #include <string>
 #include <cmath> 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string str="";
        while(head!=NULL){
            str+=to_string(head->val);
            head=head->next;
        }
        int ans=0;
         for (size_t i = 0; i < str.length(); ++i) {
            ans+=(int(str[i])-48)*(pow(2,str.length()-1-i));
            }
    
        return ans;
    }
};