#include <iostream>
using namespace std;

void even_or_odd_num1 (int integer) {
    if ((integer % 2) == 0) {
        cout << "Given input is Even Number" << endl;
    } else {
        cout << "Given input is an Odd Number" << endl;
    }
}

void even_or_odd_num2 (int integer) {
    if ((integer & 1) == 0) {
        cout << "Given input is Even Number" << endl;
    } else {
        cout << "Given input is an Odd Number" << endl;
    }
}

int main() {

    int integer = 5;
    cout << "Enter an integer number : ";
    cin >> integer;
    cout << endl;

    // even_or_odd_num1(integer);
    even_or_odd_num2(integer);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
