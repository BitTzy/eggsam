//NO.3
#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack <long int> A;
    A.push (20221130923);
    A.push (20241113019);
    A.push (20241120810);
    A.push (20241100947);
    A.push (20241100023475);
    
    cout << "Size of A: " << A.size() << endl;
    cout << "Contents of A: " << endl;
    while (!A.empty()) {
        cout << A.top() << endl;
        A.pop();
    }
    cout << endl;
    return 0;
}
