#include <iostream>
using namespace std;

long long int calc_factorial (long long int num) {
    long long int factorial = 1;
    for (int i = 2; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {

    long long int num = 35;

    long long int factorial = calc_factorial(num);
    cout << "facrtorial of the given number is " << factorial;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
