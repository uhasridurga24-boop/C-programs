#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void reverseUntil(Node* &head, int target) {
    if (!head) return;

    Node *prev = nullptr, *curr = head, *next = nullptr;
    Node *originalHead = head; 

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        
        if (curr->data == target) {
            originalHead->next = next;
            head = prev; 
            return;
        }
        curr = next;
    }
    head = prev; 
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    reverseUntil(head, 3); 
    
    while(head) { cout << head->data << " "; head = head->next; }
    return 0;
}
