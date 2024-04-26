#include <iostream>
#include <cstdlib>
#include <typeinfo>
using namespace std;

template <typename T, typename H>
/*
void foo_1(T x, H y) {
    cout << "T1: " << endl;
    cout << "My type is: " << typeid(x).name() << endl;
    cout << "My type is: " << typeid(y).name() << endl;
    cout << x << ", " << y << endl;
    cout << (x * y) << endl;
}
*/
template <typename T, int y>
void foo_2(T x) {
    cout << "T2: " << endl;
    cout << "My type is: " << typeid(x).name() << endl;
    cout << "My type is: " << typeid(y).name() << endl;
    cout << x << ", " << y << endl;
    cout << (x * y) << endl;
}

int main(){
    //foo_1(5,7);
    //int z = 9;
    foo_2<int, 7>(5);
    foo_2<int, 3>(5);
    //foo_2<int, z>(5);
    // pan podesle linki z tym rowziazaniem
    void (*p1)(int) = &foo_2<int, 7>
    void (*p2)(int) = &foo_2<int, 3>

    p1(6);
    p2(6);

    cout << static_cast<void(*) (int)>(p1) << endl;
    cout << static_cast<void(*) (int)>(p2) << endl;

    return EXIT_SUCCESS;
}
