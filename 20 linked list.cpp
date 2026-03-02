#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class linkedlist{
    private:
    	node *head;
    public:
    	linkedlist(){
    		head=NULL;
		}
    void insertatbeg(int value){
    	node *newnode=new node();
    	newnode->data=value;
    	newnode->next=head;
    	head=newnode;
	}
void display(){
	if(head==NULL){
		cout<<"list is empty";
		return;
	}
	 node *temp=head;
	 while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	} 
	cout<<"NULL\n";
}
};  

int main()


{
	linkedlist list;
	list.insertatbeg(10);
	list.insertatbeg(20);
	list.display();
	return 0;
}
