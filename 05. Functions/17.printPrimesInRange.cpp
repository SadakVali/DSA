#include <iostream>
#include <cmath>
using namespace std;

bool check_prime_or_composite (int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if ((num % i) == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int num = 10000;

    for (int i = 2; i <= num; i++) {
        bool is_prime = check_prime_or_composite(i);
        if (is_prime) {
            cout << i << "   ";
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
