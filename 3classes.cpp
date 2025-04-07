//paramaterized constructor
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) { 
        radius = r; 
    }
    double circum() {
        return 2*radius*3.14159265;
    }
};

int main () {
  Circle foo (10.0);   // functional form
  Circle bar = 20.0;   // assignment init
  Circle baz (30.0);   
  Circle qux = (40.0); 

  cout << "foo's circumference: " << foo.circum() << endl;
  cout << "bar's circumference: " << bar.circum() << endl;
  cout << "baz's circumference: " << baz.circum() << endl;
  cout << "qux's circumference: " << qux.circum() << endl;
  system("pause");
}
