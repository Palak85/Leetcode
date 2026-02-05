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
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* up = nullptr;

        while(curr != nullptr){
            up = curr->next;
            curr->next = prev;
            prev = curr;
            curr = up;
        }
        int carry = 0;
        ListNode* temp = prev;
        while(temp != nullptr){
            int product = temp->val * 2 + carry;
            temp->val = product % 10;
            carry = product / 10;
            temp = temp->next;
        }
        curr = prev;
        prev = nullptr;

        while(curr != nullptr){
            up = curr->next;
            curr->next = prev;
            prev = curr;
            curr = up;
        }

        if(carry > 0){
            ListNode* newNode = new ListNode(carry);
            newNode->next = prev;
            prev = newNode;
        }
        
        return prev;
    }
};