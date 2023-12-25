#include <iostream>
#include <vector>
using namespace std;

string convert (string &s, int num_of_rows) {
    if (num_of_rows==1) return s;
    vector<string> zigzag(num_of_rows);
    int i=0, row=0;
    bool direction=1; // 1 -> T->B
    while (i < s.size()) {
        if (direction) {
            while ((row < num_of_rows) && (i < s.size()))
                zigzag[row++].push_back(s[i++]);
            row--, row--; // row = num_of_rows - 2;
        } else {
            while ((row >= 0) && (i < s.size()))
                zigzag[row--].push_back(s[i++]);
            row++, row++; // row = 1;
        }
        direction = !direction;
    }
    string ans = "";
    for (int i=0; i<num_of_rows; i++) {
        ans += zigzag[i]; // ans.push_back(zigzag[i]);
        cout << zigzag[i] << endl;
    }
    return ans;
}


int main () {
    string s = "ABCDEFG";
    int num_of_rows = 3;
    cout << convert(s, num_of_rows) << endl;
    return 0;
}
