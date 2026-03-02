#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* reverseWithFor(Node* head) {
    Node *prev = nullptr, *next = nullptr;
    for (Node* curr = head; curr != nullptr; ) {
        next = curr->next; 
        curr->next = prev;  
        prev = curr;       
        curr = next;       
    }
    return prev; 
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    head = reverseWithFor(head);

    while(head) { cout << head->data << " "; head = head->next; }
    return 0;
}
