class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        // Step 1: Remove matching nodes from head
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Step 2: Remove from remaining list
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            if (curr->val == val) {
                ListNode* temp = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete temp;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};
