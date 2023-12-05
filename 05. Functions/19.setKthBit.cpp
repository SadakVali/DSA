#include <iostream>
using namespace std;

int set_kth_bit (int num, int k) {
    int mask = 1 << k;
    int ans = num | mask;
    return ans;
}

int main() {

    int num = 10;
    int k = 2;

    int result = set_kth_bit(num, k);
    cout << "result ===> " << result << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
