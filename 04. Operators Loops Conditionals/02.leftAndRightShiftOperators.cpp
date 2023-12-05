#include <iostream>
using namespace std;

int main() {

    int neg_shift = -2;
    int pos_shift = 2;

    int pos = 9;
    int neg = -9;

    // left shift multiplies value with 2
    cout << "(pos << pos_shift) : " << (pos << pos_shift) << endl;
    cout << "(pos << neg_shift) : " << (pos << neg_shift) << endl;

    // output depends on compiler. Some returns garbage values.
    cout << "(neg << pos_shift) : " << (neg << pos_shift) << endl;
    cout << "(neg << neg_shift) : " << (neg << neg_shift) << endl;

    cout << endl;

    // why can't we say right shift divides the number with 2?
    cout << "(pos >> pos_shift) : " << (pos >> pos_shift) << endl;
    cout << "(pos >> neg_shift) : " << (pos >> neg_shift) << endl;

    cout << "(neg >> pos_shift) : " << (neg >> pos_shift) << endl;
    cout << "(neg >> neg_shift) : " << (neg >> neg_shift) << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
