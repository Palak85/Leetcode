/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        while(curr != nullptr){
            if(curr->child != nullptr){
            Node* up = curr->next;
            Node* temp = curr->child;
            curr->next = temp;
            temp->prev = curr;
            curr->child = nullptr;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = up;
            if(up != nullptr){
            up->prev = temp;
            }
            }
            curr = curr->next;
        }
        return head;
    }
};