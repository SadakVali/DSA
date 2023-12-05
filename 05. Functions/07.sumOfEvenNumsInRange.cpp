#include <iostream>
using namespace std;

int get_sum_of_even_nums (int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {

    int n;
    cout << "enter right side range : ";
    cin >> n;
    cout << endl;

    int sum;
    sum = get_sum_of_even_nums(n);
    cout << sum << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
