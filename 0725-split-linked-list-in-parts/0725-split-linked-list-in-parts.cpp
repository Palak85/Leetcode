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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> parts(k, nullptr);
        ListNode* temp = head;
        int n = 0;
        while(temp != nullptr){
            n++;
            temp = temp->next;
        }

        int basesize = n / k;
        int extra = n % k;
         
        ListNode* curr = head;
        for(int i=0; i<k; i++){
            parts[i] = curr;
            
            int partsize;
            if(extra > 0){
                partsize = basesize + 1;
                extra--;
            }
            else{
                partsize = basesize;
            }

            int j=1;
            while(j < partsize && curr != nullptr){
                curr = curr->next;
                j++;
            }

            if (curr != nullptr) {
            ListNode* nextPart = curr->next;
            curr->next = nullptr;
            curr = nextPart;
            }
        }

        return parts;
    }
};