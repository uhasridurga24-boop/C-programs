#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void reverseFirstHalf(Node* &head) {
    if (!head || !head->next) return;
    int count = 0;
    Node* temp = head;
    while (temp) { count++; temp = temp->next; }

    Node *prev = nullptr, *curr = head, *next = nullptr;
    for (int i = 0; i < count / 2; i++) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = curr;
    head = prev;
}
