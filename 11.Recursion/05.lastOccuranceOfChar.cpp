#include<iostream>
#include<chrono>
using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    // PROCESSING
    // OUTPUT
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
