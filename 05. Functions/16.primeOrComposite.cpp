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

    int num = 44;

    bool is_prime = check_prime_or_composite(num);
    if (is_prime) {
        cout << "Given input number is Prime Number" << endl;
    } else {
        cout << "Given input number is Composirte Number" << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
