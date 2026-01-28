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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr != nullptr){
            if(curr->next != nullptr && curr->val == curr->next->val){
                int val = curr->val;
                while(curr != nullptr && curr->val == val){
                    curr = curr->next;
                }
                if(prev != nullptr){
                    prev->next = curr;
                }
                else{
                    head = curr;
                }
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};