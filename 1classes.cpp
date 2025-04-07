//parameterized constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int,int);
    int area () {return (width*height);}
};

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rectA (3,4);
  Rectangle rectB (5,6);
  
  cout << "Area of Rectangle A: " << rectA.area() << endl;
  cout << "Area of Rectangle B: " << rectB.area() << endl;
  system("pause");
}
