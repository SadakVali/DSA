#include<iostream>
using namespace std;

class abc {
    public:
        int x, y; // int y, x;
        void print() const {
            cout << this->x << " " << this->y << endl;
        }
};


int main() {

    abc obj1 = {1, 2};
    abc obj2 = {3, 4};

    obj1.print();
    obj2.print();

    cout << endl << endl << endl;
    return 0;
}
