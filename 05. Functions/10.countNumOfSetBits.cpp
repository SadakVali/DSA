#include <iostream>
using namespace std;

int main() {

    // int input_num = 3; // 2
    // int input_num = 2; // 1
    // int input_num = 15; // 4
    int input_num = 14; // 3
    // int input_num = -14; // infinity WHY THIS WON'T WORK WITH NEGATIVE NUMBERS?
    int num_of_set_bits = 0;

    while (input_num != 0) {
        if (input_num & 1) {
            num_of_set_bits++;
            cout << "set bit found..." << endl;
        } else {
            cout << "set bit never found..." << endl;
        }
        // right shift
        input_num = input_num >> 1;
    }

    cout << "Number of set bits : " << num_of_set_bits << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
