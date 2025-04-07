#include <iostream>
#include <stack>
using namespace std;

int main () {
stack<int> A;
A. push(2);
A. push(4);
A. push(6);
A. push(8);
A. push(10);

cout << "Size of A: " << A.size() << endl;
cout << "Contents of A: " << endl;
while (!A.empty()) {
    cout << A.top() << endl;
    A.pop();
}
cout << endl;
return 0;
}