#include<iostream>
#include<chrono>
using namespace std;

void reverse_string(string &name, int start, int end) {
    if (start >= end) return;
    swap(name[start], name[end]);
    reverse_string(name, ++start, --end);
}


int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    string name = "Sadiq Vali";
    // PROCESSING
    reverse_string(name, 0, 9);
    // OUTPUT
    cout << "The reversed String : " << name << endl;
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
