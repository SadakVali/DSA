/*
Normal Solution to find a^b -> O(b)
Better Solution for a^b -> O(lg(b))
*/
#include <iostream>
#include <chrono>
using namespace std;

int slow_exponentiation (int &a, int &b) {
    int ans = 1;
    for (int i=0; i<b; i++) ans *= a;
    return ans;
}

int fast_exponentiation (int &a, int &b) {
    int ans = 1;
    while (b) {
        if (b & 1) ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}


int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int a = 2;
    int b = 5;
    // PROCESSING
    int ans = slow_exponentiation(a, b);
    // int ans = fast_exponentiation(a, b);
    // OUTPUT
    cout << ans << endl;
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
