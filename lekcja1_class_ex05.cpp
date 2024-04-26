#include <iostream>
#include <cstdlib>

using namespace std;

void bar(int x){
    static int acc = 0; // przy kolejnym wywolaniu funkcji bedzie dalej pamietac swoj stan z poprzedniego wywolania
    acc += x;
    cout << acc << endl;
}


int main() {
    bar(5);
    bar(7);
    bar(3);

    return EXIT_SUCCESS;
}
