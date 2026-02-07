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
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        // ListNode* slow = head;
        // ListNode* fast = head;
        // ListNode* prev = nullptr;
        // while(fast != nullptr && fast->next != nullptr){
        //     prev = slow;
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }
        
        // prev->next = slow->next;
        // delete slow;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){ 
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = slow->next; 
        slow->next = nullptr; 
        ListNode* temp1 = head; 
        ListNode* temp2 = head->next; 
        while(temp2->next != nullptr){ 
            temp2 = temp2->next; 
            temp1 = temp1->next; 
        } 
        temp1->next = temp; 
        delete temp2;
        return head;
    }
};