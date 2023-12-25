#include <iostream>
using namespace std;

bool is_this_a_palindrome (string &str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++, end--;
    }
    return true;
}

string find_longest_palindromic_sub_syring (string &str) {
    int n = str.size();
    string ans = "";
    for (int i=0; (i < n-1) && (n-i > ans.size()); i++) {
        for (int j=n-1; (j>=i) && ((j-i+1) > ans.size()); j--) {
            if (is_this_a_palindrome(str, i, j))
                ans = str.substr(i, j-i+1);
        }
    }
    return ans;
}


int main () {
    string str = "babad";
    cout << find_longest_palindromic_sub_syring(str) << endl;

    cout << endl;
    return 0;
}
