#include <iostream>

using namespace std;

bool is_t_anagram_of_s (string &s, string &t) {
    int frequency_table[256] = {0};
    for (int i=0; i<s.length(); i++)
        frequency_table[(int)s[i]]++;
    for (int i=0; i<t.size(); i++)
        frequency_table[t[i]]--;
    for (int i=0; i<256; i++) {
        if (frequency_table[i] != 0)
            return false;
    }
    return true;
}


int main () {
    string s = "anagram";
    string t = "nagaram";
    cout << "Check Anagram : " << is_t_anagram_of_s(s, t) << endl;
    return 0;
}
