#include<iostream>
using namespace std;

class  abc {
    int x;
    int *y;
    const int z;
    public:
        // abc(int _x, int _y, int _z = 0) { 
        //     x = _x;
        //     y = new int(_y);
        //     z = _z; // reassignment of const varible is not possible
        // };
        abc(int _x, int _y, int _z=0) : x(_x), y(new int(_y)), z(_z) {
            *y *= 10;
            // z = 100; // reassignment of const varible is not possible
        };
        int get_x() const {
            return this->x;
        };
        int get_y() const {
            return *this->y;
        };
        int get_z() const {
            return this->z;
        };
};

void print_abc(const abc &a) {
    cout << a.get_x() << " " << a.get_y() << " " << a.get_z() << endl;
};


int main() {

    abc a(-1, -2);
    print_abc(a);

    abc b(-1, -2, -3);
    print_abc(b);

    cout << endl << endl << endl;
    return 0;
};
