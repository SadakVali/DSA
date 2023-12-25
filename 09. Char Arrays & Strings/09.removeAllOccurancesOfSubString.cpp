#include <iostream>
using namespace std;

void remove_all_occurances (string &str, string &part) {
    int position = str.find(part);
    while (position != string::npos) {
        str.erase(position, part.length());
        position = str.find(part);
    }
}


// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
int main() {

    string str = "daabcbaabcbc";
    string part = "abc";
    remove_all_occurances(str, part);
    cout << str << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
