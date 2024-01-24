#include<iostream>
using namespace std;

class abc {
    public:
        int x;
        int *y;

        abc(int _x, int _y) : x(_x), y(new int(_y)) {};

        // // default dumb copy constructor ::: does SHALLOW COPY
        // abc(const abc &obj) {
        //     x = obj.x;
        //     y = obj.y;
        // };

        // OUR SMART DEEP COPY
        abc(const abc &obj) {
            x = obj.x;
            y = new int(*obj.y);
        };

        void print() const {
            printf("X : %d\nPTR Y : %p\nContent of Y (*y) : %d\n\n", x, y, *y);
        }
};


int main() {

    abc a(1, 2);
    a.print();

    abc b = a; // abc b(a);
    b.print();

    b.x = 10;
    *b.y = 20;
    b.print();
    a.print();

    cout << endl << endl << endl;
    return 0;
}
