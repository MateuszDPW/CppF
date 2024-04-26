#include <iostream>
#include <cstdlib>
#include <typeinfo>
using namespace std;
// robienie przeciążeń
void foo_1(int x, int y) {
    cout << "My type is: " << typeid(x).name() << endl;
    cout << x << ", " << y << endl;
}
void foo_1(double x, double y) {    // wariant funkcji foo_1
    cout << "My type is: " << typeid(x).name() << endl;
    cout << x << ", " << y << endl;
}
void foo_1(double x, int y) {    // wariant funkcji foo_1
    cout << "My type is: " << typeid(x).name() << endl;
    cout << "My type is: " << typeid(y).name() << endl;
    cout << x << ", " << y << endl;
}
void foo_1(int x, double y) {    // wariant funkcji foo_1
    cout << "My type is: " << typeid(x).name() << endl;
    cout << "My type is: " << typeid(y).name() << endl;
    cout << x << ", " << y << endl;
}
/*
double foo_1(double x, double y) {    // wariant funkcji foo_1, funkcje nie moga sie roznic tym co zwracają, wiec jest to źle
    cout << "My type is: " << typeid(x).name() << endl; // musza sie roznic nazwa lub argumentami
    cout << x << ", " << y << endl;
    return x + y;
}
*/


int main(){
    foo_1(3, 5);
    foo_1(3.1, 5.3); // zgubienie 0.1 i 0.3 gdy nie bylo przeladowan (przeciążeń)
    foo_1(3.1, 5);
    foo_1(3, 5.3);

    return EXIT_SUCCESS;
}
