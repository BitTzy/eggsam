#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> A;
    int x, n, ctr;

    cout << "Enter The Size of the Stack : ";
    cin >> x;

    for (ctr = 1; ctr <= x; ctr++) {
        cout << "Enter Any Element : ";
        cin >> n;
        A.push(n);
    }

    cout << "Stack Size : " << A.size() << endl;

    cout << "Stack Contents : " << endl;
    while (!A.empty()){
        cout << A.top() << endl;
        A.pop();
    }
    cout << endl;
    return 0;
}