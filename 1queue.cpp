#include <iostream>
#include <queue>
using namespace std;

queue<string> myqueue;
char name [10];
int x;

int main() {
    for (x = 1; x <= 5; x++) {
        cout << "Enter a name : ";
        cin >> name;
        myqueue.push(name);
    }

    cout << "The names are : " << endl;
    while (!myqueue.empty()) {
        cout << myqueue.front() << endl;
        myqueue.pop();
    }
    return 0;
}