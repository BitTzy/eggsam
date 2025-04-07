#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    stack<int> mystack;
    queue<int> myqueue;

    mystack.push(2);
    mystack.push(4);
    mystack.push(10);
    mystack.push(21);
    mystack.push(22);

    cout << "Elements in Stack : " << endl;
    while (!mystack.empty()) {
        cout << mystack.top() << " " << endl;
        myqueue.push(mystack.top());
        mystack.pop();
    }

    cout << "Elements in Queue : " << endl;
    while (!myqueue.empty()){
        cout << myqueue.front() << " " << endl;
        myqueue.pop();
    }
    cout << endl;
    return 0;
}