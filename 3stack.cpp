#include <iostream>
#include <stack> 
using namespace std;

stack <string> mystack;
char name [10];
int x;

int main() {
    for (x = 1; x <= 5; x++) {
        cout << "Enter a name : ";
        cin >> name;
        mystack.push(name);
    }

    cout << "The names are : " << endl;
    while (!mystack.empty()) {
        cout << mystack.top() << endl;
        mystack.pop();
    }
    return 0;
}
