#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void reverseVector(vector<int> &v) {
    stack<int> s;

    for (int i = 0; i < v.size(); i++) {
        s.push(v[i]);
    }

    for (int i = 0; i < v.size(); i++) {
        v[i] = s.top();
        s.pop();
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    reverseVector(v);

    cout << "Reversed vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
