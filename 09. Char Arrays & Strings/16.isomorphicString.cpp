// https://leetcode.com/problems/isomorphic-strings/description/
#include <iostream>

using namespace std;

bool is_this_isomorphic_pair (string &source, string &target) {
    int source_char_map[256] = {0}; // from source char to target chars
    bool is_this_target_char_mapped[256] = {0}; // stores if t[i] already mapped with s[i]
    for (int i=0; i<source.size(); i++) {
        if (source_char_map[source[i]] == 0) {
            if (is_this_target_char_mapped[target[i]] == 0) {
                source_char_map[source[i]] = target[i];
                is_this_target_char_mapped[target[i]] = true;
            } else return false;
        } else if (source_char_map[source[i]] == target[i]) continue;
        else return false;
    }
    return true;
}

int main () {
    string source = "paper";
    string target = "title";
    cout << is_this_isomorphic_pair(source, target) << endl;
    return 0;
}
