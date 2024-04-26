#include <iostream>
#include <cstdlib>
#include <typeinfo>
using namespace std;
/*
void foo_1(int x, int y) {
    cout << "My type is: " << typeid(x).name() << endl;
    cout << "My type is: " << typeid(y).name() << endl;
    cout << x << ", " << y << endl;
}
void foo_1(double x, double y) {
    cout << "My type is: " << typeid(x).name() << endl;
    cout << "My type is: " << typeid(y).name() << endl;
    cout << x << ", " << y << endl;
}
*/
template <typename T>
void foo_1(T x, T y) {
    cout << "T1: " << endl;
    cout << "My type is: " << typeid(x).name() << endl;
    cout << "My type is: " << typeid(y).name() << endl;
    cout << x << ", " << y << endl;
}
template <typename T, typename H>
void foo_1(T x, H y) {
    cout << "T2: " << endl;
    cout << "My type is: " << typeid(x).name() << endl;
    cout << "My type is: " << typeid(y).name() << endl;
    cout << x << ", " << y << endl;
}

int main(){
    foo_1<int>(3, 5);
    foo_1<double>(3.1, 5.3);
    
    foo_1(3, 5);
    foo_1<int, int>(3, 5);
    foo_1<int, double>(3, 5);

    return EXIT_SUCCESS;
}
