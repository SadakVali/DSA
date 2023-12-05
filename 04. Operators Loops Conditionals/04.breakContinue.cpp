#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 5; i++) {
        cout << i << endl;
        break;
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << i << endl;
        if (i == 3) {
            continue;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
