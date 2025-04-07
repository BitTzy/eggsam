#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    stack <int> mystack;
    queue <int> myqueue;
    
    myqueue.push(1);
    myqueue.push(5);
    myqueue.push(8);
    myqueue.push(9);
    myqueue.push(33);

    cout << "Elements in Queue: " << endl;
    while (!myqueue.empty()) {
        cout << myqueue.front() << endl;
        mystack.push(myqueue.front());
        myqueue.pop();
    }

    cout << "Elements in Stack: " << endl;
    while (!mystack.empty()){
        cout << mystack.top() << endl;
        mystack.pop();
    }
    cout << endl;
    return 0;
}