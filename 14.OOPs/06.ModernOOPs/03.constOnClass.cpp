#include<iostream>
using namespace std;

class  abc {
    int x;
    int *y;
    public:
        abc(int _x, int _y) { 
            x = _x;
            y = new int(_y);
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
};

void print_abc(const abc &a) {
    // a.set_x(1000); // ERROR ::: set_x need to be const function
    cout << a.get_x() << " " << a.get_y() << endl;
};


int main() {

    abc a(-1, -2);
    print_abc(a);

    cout << endl << endl << endl;
    return 0;
};
