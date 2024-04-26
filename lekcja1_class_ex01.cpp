#include <iostream>
#include <cstdlib>
using namespace std;

/*
class Rectangle {
    public:
        int width, height;
};
*/
class Rectangle {
    private:
        int width, height;
    public:
        /*
        void setInitValues(int w, int h) {
            witdh = w;
            height = h;
        }
        int getArea() {
            return width * height;
        }
        */

};
void Rectangle::setInitValues(int w, int h) {
            this->width = width;    //element tego obiektu na ktorym wykonuje te metode (this ->)
            this->height = height;
        }

int main() {
    Rectangle r1;
    Rectangle r2;
    int a;

    r1.setInitValues(10, 5);
    a = r1.getArea();
    cout << a << endl;
    r2.setInitValues(5, 7);
    a = r2.getArea();
    cout << a << endl;

    return EXIT_SUCCESS;
}
