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
Circle::Circle(int radius){
    this->radius = radius;
}

int main() {
    int a;
    Circle c1(5);
    Circle c2 = 5; // ze znakiem = gdy konstruktor ma 1 argument
    Circle c3 {5};
    Circle c4 = {5};
    
    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;
    cout << c3.getArea() << endl;
    cout << c4.getArea() << endl;

    return EXIT_SUCCESS;
}
