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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr) return nullptr;
        ListNode* curr = head;
        ListNode* oddHead = nullptr ;
        ListNode* oddTail = nullptr;
        ListNode* evenHead = nullptr ;
        ListNode* evenTail = nullptr;
        int cnt = 1;
        while(curr!=nullptr){
           if(cnt%2!=0){
            ListNode* oddNode = new ListNode(curr->val);
            if(oddHead==nullptr){
                oddHead = oddNode;
                oddTail = oddNode;
            }else{
                oddTail->next = oddNode;
                oddTail = oddNode;
            }
           }
           else{
            ListNode* evenNode = new ListNode(curr->val);
            if(evenHead==nullptr){
                evenHead = evenNode;
                evenTail = evenNode;
            }else{
                evenTail->next = evenNode;
                evenTail = evenNode;
            }
           }
           curr = curr->next;
           cnt++;
        } 
        oddTail->next = evenHead;
        return oddHead;
    }
};