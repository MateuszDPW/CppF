#include <iostream>
#include <cstdlib>
#define PI 3.14159
using namespace std;

class Circle {
    private:
        int radius;
    public:
        Circle (int radius);
        int getArea() {
            return PI * radius * radius;
        }
};

Circle::Circle(int radius): radius(radius) {}

class Rectangle {
    private:
        int width, height;
    public:
        Rectangle (int width, int height);
        //Rectangle();
        int getArea() {
            return width * height;
        }
};

Rectangle::Rectangle(int width, int height): width(width), height(height) {}

int main() {
    int a;
    Circle c1(5);
    Rectangle r1(3, 4);
    
    cout << c1.getArea() << endl;
    cout << r1.getArea() << endl;

    return EXIT_SUCCESS;
}
