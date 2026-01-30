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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = nullptr;
        ListNode* tail = nullptr;

        ListNode* a = list1;
        ListNode* b = list2;

        while (a != nullptr && b != nullptr) {
            ListNode* newNode = nullptr;

            if (a->val < b->val) {
                newNode = new ListNode(a->val);
                a = a->next;
            } else {
                newNode = new ListNode(b->val);
                b = b->next;
            }

            if (list3 == nullptr) {
                list3 = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        while (a != nullptr) {
            if (list3 == nullptr) {
                list3 = tail = new ListNode(a->val);
            } else {
                tail->next = new ListNode(a->val);
                tail = tail->next;
            }
            a = a->next;
        }

        while (b != nullptr) {
            if (list3 == nullptr) {
                list3 = tail = new ListNode(b->val);
            } else {
                tail->next = new ListNode(b->val);
                tail = tail->next;
            }
            b = b->next;
        }

        return list3;
    }
};