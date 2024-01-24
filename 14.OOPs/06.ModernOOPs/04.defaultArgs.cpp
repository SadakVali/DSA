#include<iostream>
using namespace std;

class  abc {
    int x;
    int* y;
    int z;
    public:
        // default arguements should always be placed at the end.
        abc(int _x, int _y, int _z=0) { 
            x = _x;
            y = new int(_y);
            z = _z;
        };
        int get_x() const {
            // x = 50; // ERROR ::: CONST FUNCTIONS don't change state
            return this->x;
        };
        int get_y() const {
            int f = 20;
            // y = &f; // ERROR ::: CONST FUNCTIONS don't change state
            return *this->y; // *this->y = _val;
        };
        int get_z() const {
            return z;
        }
};

void print_abc(const abc &a) {
    /*
    In this function we have given a CONST object, so here we can not 
    make any NON-CONST function calls.
    */
    cout << a.get_x() << " " << a.get_y() << " " << a.get_z() << endl;
};


int main() {

    abc a(-1, -2); // If z not given, it will use default arguement.
    print_abc(a);

    abc b(-1, -2, -3); // If z value is given, it will use it
    print_abc(b);

    cout << endl << endl << endl;
    return 0;
};
