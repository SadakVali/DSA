#include <iostream>
#include <chrono>
using namespace std;

int gcd (int &A, int &B) {
    if (A == 0) return B;
    if (B == 0) return A;
    while ((A > 0) && (B > 0)) {
        if (A > B) A -= B;
        else B -= A;
    }
    return A == 0 ? B : A;
}

int main() {
    auto start = chrono::high_resolution_clock::now();
    /* 
    ################## Your code starts below ##################
    */
    int A = 73;
    int B = 24;
    cout << gcd(A, B) << endl;
    /* 
    ################## Your code ends below ##################
    */
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " milli seconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
