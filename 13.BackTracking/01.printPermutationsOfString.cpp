#include<iostream>
#include<chrono>
using namespace std;

void print_all_permutations(string &str, int i) {
    if (i == str.size()-1) {
        cout << str << endl;
        return;
    }
    for (int j=i; j<str.size(); j++) {
        swap(str[i], str[j]);
        print_all_permutations(str, i+1);
        swap(str[i], str[j]);
    }
}


// TC => O(n!) => SC => O(n) where n = str.size()
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    string str = "abc";
    // PROCESSING
    print_all_permutations(str, 0);
    // OUTPUT
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
