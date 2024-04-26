#include <iostream>
#include <cstdlib>

using namespace std;

class C {
    //statyczne tez moga byc prywatne
    int x;
    public:
        static int counter;

        C (int x){
            this->x = x*2;
            counter += 1;
        }

        void print(){
            cout << "x = " << x << ", counter = " << counter << endl;
        }

        void change (int x);
};
void C::change(int x) {
    counter += x;
}

int C::counter = 0; // inicjalizowanie poza klasą

int main() {
    C c1(5);
    c1.print();
    C c2(3);
    c2.print();
    c2.change(17);
    c1.print();

    cout << C::counter << endl;

    return EXIT_SUCCESS;
}
