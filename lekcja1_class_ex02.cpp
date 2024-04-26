#include <iostream>
#include <cstdlib>
using namespace std;


class Rectangle {
    private:
        int width, height;
    public:
        Rectangle (int width, int height);
        int getArea() {
            return width * height;
        }
};
Rectangle::Rectangle(int width, int height){
    this->width = width;
    this->height = height;
}
Rectangle::Rectangle(){ 
    this->width = 1;
    this->height = 1;
}

int main() {
    Rectangle r1(10, 5);
    Rectangle r2;
    int a;

    a = r1.getArea();
    cout << a << endl;
    
    a = r2.getArea();
    cout << a << endl;

    return EXIT_SUCCESS;
}
