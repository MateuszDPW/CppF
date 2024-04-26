#include <iostream>
#include <cstdlib>
using namespace std;

void foo(int x) {
    x += 2;
}
int foo_1(int x) {
    x += 2;
    return x;
}
void foo_2(int *x) {
    *x += 2;
}
void foo_3(int  &x) {
    x += 2;
}

int main(){
    int a = 3;
    cout<< a <<endl;
    foo(a);
    cout<< a <<endl;
    a = foo_1(a); // przekazywanie przez wartosc
    cout<< a <<endl;
    a = foo_2(&a);
    cout<< a <<endl;
    a = foo_3(&a); // przekazywanie przez referencje
    cout<< a <<endl;

    return EXIT_SUCCESS;
}
