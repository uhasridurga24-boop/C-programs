#include <iostream>
using namespace std;

#define MAX 100

class Stackinterface {
public:
    virtual void push(int) = 0;
    virtual void pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public Stackinterface{
    int arr[MAX];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int x) {
        if (isFull()) 
		return;
        arr[++topIndex] = x;
    }

    void pop() {
        if (isEmpty()) return;
        topIndex--;
    }

    int top() {
        if (isEmpty()) 
		return -1;
        return arr[topIndex];
    }

    bool isEmpty() {
        return (topIndex<0);
    }

    bool isFull() {
        return topIndex == MAX - 1;
    }
};

int main() {
    Stack s;

    s.push(5);
    s.push(10);
    s.push(20);
    cout<<"top element: "<<s.top()<<endl;
    s.pop();
     cout<<"top element: "<<s.top()<<endl;
     return 0;
}
