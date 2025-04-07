#include <iostream>
#include <stack>
using namespace std;

stack <int> mystack1;
stack <int> mystack2;
int x, n;
int main() {
    for (x = 1; x <= 5; x++) {
        cout << "Enter a number : ";
        cin >> n;
        mystack1.push(n);
    
    }

    cout << "Contents Of mystack1: " << endl;
    while (!mystack1.empty()) {
        cout << mystack1.top() << endl;
        mystack2.push(mystack1.top());
        mystack1.pop();
    }

    cout << "Transfering to mystack2: \n" << endl;
    while (!mystack2.empty()) {
        cout << mystack2.top() << endl;
        mystack2.pop();
    }
    return 0;
}