#include <iostream>
#include <stack>
using namespace std;

bool areEqual(stack<int> s1, stack<int> s2) {

    if (s1.size() != s2.size())
        return false;

    while (!s1.empty()) {
        if (s1.top() != s2.top())
            return false;

        s1.pop();
        s2.pop();
    }

    return true;
}

int main() {
    stack<int> s1, s2;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s2.push(10);
    s2.push(20);
    s2.push(30);

    if (areEqual(s1, s2))
        cout << "Stacks are equal";
    else
        cout << "Stacks are not equal";

    return 0;
}
