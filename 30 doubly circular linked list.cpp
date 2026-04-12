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

    void insertatend(int val) {
        node *newnode = new node;
        newnode->data = val;

        if (head == nullptr) {
            newnode->next = newnode;
            head = newnode;
        } else {
            node *temp = head;
            while (temp->next != head)
                temp = temp->next;

            temp->next = newnode;
            newnode->next = head;
        }
    }

    void deleteatbeginning() {
        if (head == nullptr) return;

        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            node *temp = head;
            node *last = head;

            while (last->next != head)
                last = last->next;

            head = head->next;
            last->next = head;
            delete temp;
        }
    }

    void display() {
        if (head == nullptr) {
            cout << "null\n";
            return;
        }

        node *temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "null\n";
    }
};

int main() {
    linkedlist l;

    l.insertatend(10);
    l.insertatend(20);
    l.insertatend(30);

    l.display();

    l.deleteatbeginning();
    l.display();

    return 0;
}
