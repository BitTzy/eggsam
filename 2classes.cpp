//basic and parameterized constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    int area () {
        return (width*height);
    }
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rectA (3,4);
  Rectangle rectB;
  cout << "Area of Rectangle A: " << rectA.area() << endl;
  cout << "Area of Rectangle B: " << rectB.area() << endl;
  system("pause");
}
