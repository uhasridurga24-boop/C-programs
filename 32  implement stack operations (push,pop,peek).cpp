#include <iostream>
using namespace std;

int stack[100], n = 100, top = -1;
void push(int val) {
    if (top >= n - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        stack[top] = val;
    }
}

void pop() {
    if (top <= -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

void peek() {
    if (top >= 0) {
        cout << "Top element is " << stack[top] << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    
    peek(); 
    pop();  
    peek(); 
    
    return 0;
}
