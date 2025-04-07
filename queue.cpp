#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> B;
    B. push(1);
    B. push(3);
    B. push(5);
    B. push(7);
    B. push(9);
    cout << "Queue Size : " << B.size() << endl;
    cout << "Contents of Queue : " << endl;
    while (!B.empty()) {
        cout << B.front() << ";" << B.back() << endl;
        B.pop();
    }
    return 0;
}