#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

double getAverage(Node* head) {
    if (!head) return 0;
    if (!head->next) return head->data;

    int first = head->data;
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    int middle = slow->data;
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    int last = temp->data;

    return (first + middle + last) / 3.0;
}

int main() {
    Node* head = new Node(10); 
    head->next = new Node(20);
    head->next->next = new Node(30); 
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50); 

    cout << "Average: " << getAverage(head); 
    return 0;
}
