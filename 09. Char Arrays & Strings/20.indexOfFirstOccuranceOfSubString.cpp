#include <iostream>
using namespace std;

int find_index_of_first_occu_of_needle (string &haystack, string &needle) {
    int n=haystack.size(), m=needle.size();
    for (int i=0; i<=(n-m); i++) {
        for (int j=0; j<m; j++) {
            if (needle[j] != haystack[i+j]) break;
            if (j == m-1) return i;
        }
    }
    return -1;
}


int main () {
    string haystack = "butsad";
    string needle = "sad";

    cout << find_index_of_first_occu_of_needle(haystack, needle) << endl;

    cout << endl;
    return 0;
}
