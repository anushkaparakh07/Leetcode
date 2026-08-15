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
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode* curr = head;
        int cnt = 0;
        while(curr!=nullptr){
            cnt++;
            curr = curr->next;
        }
        int cnt1 = 0;
        int pos = cnt/2;
        ListNode* temp = head;
        while(cnt1<pos-1){
            temp = temp->next;
            cnt1++;
        } 
        temp->next=temp->next->next;
        return head;
    }
};