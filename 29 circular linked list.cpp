#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

class linkedlist {
private:
    node *head;

public:
    linkedlist() {
        head = nullptr;
    }

    void insertatbeginning(int val) {
        node *newnode = new node;
        newnode->data = val;

        if (head == nullptr) {
            newnode->next = newnode;
            head = newnode;
        } else {
            node *temp = head;
            while (temp->next != head)
                temp = temp->next;

            newnode->next = head;
            temp->next = newnode;
            head = newnode;
        }
    }

    void display() {
        if (head == nullptr) return;

        node *temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(head)\n";
    }
};

int main() {
    linkedlist l;

    l.insertatbeginning(10);
    l.insertatbeginning(20);
    l.insertatbeginning(30);

    l.display();

    return 0;
}
