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

        ~abc() {
            delete y;
        }
};


int main() {

    abc *a = new abc(1, 2);
    abc b = *a; // abc b(*a);

    a->print();
    delete a;
    b.print();

    cout << endl << endl << endl;
    return 0;
}
