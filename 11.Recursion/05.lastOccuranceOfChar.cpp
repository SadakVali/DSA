#include<iostream>
#include<chrono>
using namespace std;

int find_last_occurance_of_key1(string &name, char &key, int &index) {
    if (index == -1) return -1;
    if (name[index] == key) return index;
    return find_last_occurance_of_key1(name, key, --index);
}

void find_last_occurance_of_key2(string &name, char &key, int &index, int &last_index_of_key) {
    if (index == name.size()) return;
    if (name[index] == key) last_index_of_key = index;
    find_last_occurance_of_key2(name, key, ++index, last_index_of_key);
}


// strrchr() STL function can be used in this cases
// O(n) Time and Space Complexity for n+1 function calls in stack
int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    string name = "Sadiq Vali";
    char key = 'a';
    // PROCESSING
    // // Right to Left traversal
    // int index = name.size()-1;
    // int last_index_of_key = find_last_occurance_of_key2(name, key, index);
    // Left to Right Traversal
    int index = 0;
    int last_index_of_key;
    find_last_occurance_of_key2(name, key, index, last_index_of_key);
    // OUTPUT
    cout << "The last Occurance of the key character is @ : " << last_index_of_key << endl;
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
