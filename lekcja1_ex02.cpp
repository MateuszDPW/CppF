#include <iostream>
#include <cstdlib>
using namespace std;

void foo_1(int x, int y, bool debug = false) {
    if (debug){
    cout << x << ", "<< y << ", TRUE" << endl;
    } else {
        cout << x << ", "<< y << ", FALSE" << endl;
    }
}
void foo_2(int x, int y = 7, bool debug = false) {
    if (debug){
    cout << x << ", "<< y << ", TRUE" << endl;
    } else {
        cout << x << ", "<< y << ", FALSE" << endl;
    }
}
int main(){
    foo_1(3, 5);
    foo_1(3, 5, false);
    foo_1(3, 5, true);
    
    foo_2(3, 9, true);
    foo_2(3, 9);
    foo_2(3);
    foo_2(3, true); // true = 1 dlatego wypisze, a tak to jest to blad

    return EXIT_SUCCESS;
}
