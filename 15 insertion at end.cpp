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
   
    void insertAtend(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if(head==nullptr){
        	head = newNode;
        	return;
		}
		Node* temp = head;
		while(temp -> next != nullptr){
			temp = temp->next;
		}
		temp -> next = newNode;
    }
    
        void display() {
        Node * temp = head;
        while(temp!=nullptr){
        	cout << temp-> data << " -> ";
        	temp = temp->next;
		}
		if(temp == nullptr){
			cout << "NULL" << endl;
		}
    }
};

int main() {
    LinkedList list;

    list.insertAtend(10);
    list.insertAtend(20);
    list.insertAtend(30);
    list.insertAtend(40);
    list.insertAtend(50);
    list.display();

    return 0;
}
