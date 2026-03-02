#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};


class LinkedList {
private:
    Node* head; 

public:
    
    LinkedList() {
        head = nullptr;
    }
   
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    
        void display() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
	int n,i,v=10;
	cout << "Enter The Number Of Nodes: ";
	cin >> n;
	while(i<n){
		list.insertAtBeginning(v);
		v+=10;
		i++;
	}
    list.display();

    return 0;
}
