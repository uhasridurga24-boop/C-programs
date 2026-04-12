include <iostream>
using namespace std;

struct Node {
	
	int data;
	Node* prev;
	Node* next;
	
	Node(int value)
	{
		data = value;
	    prev = NULL;	
		next = NULL;
	}
	
};

class DoubleLinkedList
{
Node* head;

public:
DoubleLinkedList()
{
	head = NULL;	
}	
	
public: 

void InsertAtEnd(int value)
{
Node* newNode = new Node(value);	
if(head == NULL)
{
head = newNode;
return;
}	
Node* temp = head;

while(temp->next != NULL)
{
temp = temp->next;	
}

temp->next = newNode;
newNode->prev = temp;
}	
	
void Display()
{
Node* temp = head;
    	
while(temp != NULL)
{
cout << temp->data << "<->";		
temp = temp->next;
}	
	
cout << "NULL" << endl;	
}	
		
};

int main()
{
DoubleLinkedList lt;	
	
lt.InsertAtEnd(10);
lt.InsertAtEnd(20);
lt.InsertAtEnd(30);
lt.InsertAtEnd(40);
lt.InsertAtEnd(50);

lt.Display();
	
return 0;
}
