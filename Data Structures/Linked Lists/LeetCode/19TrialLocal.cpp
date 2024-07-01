#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
            cout<<"if condition value = "<<(j==count-n-1);
            cout<<endl;
            cout<<"j = "<<j;
            cout<<endl;
            cout<<"count = "<<count;
            cout<<endl;
            cout<<"n = "<<n;
            cout<<"condtion value = "<<count-n-1;
            cout<<endl;
            if(j==count-n){
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

// Function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to create a linked list from an array
ListNode* createList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    vector<int> input = {1, 2};
    int n = 2;

    // Create the linked list
    ListNode* head = createList(input);

    // Solution instance
    Solution solution;
    head = solution.removeNthFromEnd(head, n);

    // Print the result
    printList(head);

    return 0;
}
