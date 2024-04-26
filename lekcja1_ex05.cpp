#include <iostream>
#include <cstdlib>
using namespace std;

void foo_2(int x, int y) {
    cout << x << ", " << y <<", " << debug << endl;
}
void foo_2(int x, int y, bool debug = false) {
    cout << x << ", " << y <<", " << debug << endl;
}
int main(){
    foo_2(5, 7, true);
    foo_2(5, 7); // nie zadziala
    return EXIT_SUCCESS;
}
