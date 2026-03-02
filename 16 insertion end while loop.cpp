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
	int n,i,v=10,y;
	cout << "Enter The Number Of Nodes You Want : ";
	cin >> n;
	y=v*n;
	while(i<n){
		list.insertAtend(y);
		y-=10;
		i++;
	}
    list.display();

    return 0;
}
