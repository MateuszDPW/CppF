#include <iostream>
#include <cstdlib>
using namespace std;

void foo_2(int x, int y, bool debug) {
    cout << x << ", " << y <<", " << debug << endl;
}
void foo_2(int x, int y) {
    cout << "1: " << endl;
    foo_2(x, y, false);
}
void foo_2(int x) {
    cout << "2: " << endl;
    foo_2(x, 7, false);
}
void foo_2(int x, bool debug) {
    cout << "3: " << endl;
    foo_2(x, 7, debug);
}

int main(){
    foo_1(3, 9, true);
    foo_1(3, 9);
    foo_1(3);
    foo_1(3, true);

    return EXIT_SUCCESS;
}
