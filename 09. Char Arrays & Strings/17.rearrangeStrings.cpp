// https://leetcode.com/problems/reorganize-string/description/
#include <iostream>
using namespace std;

string rearrange_string (string &str) {
    // calculate the frquency of each char in the given string
    int char_count[26] = {0};
    for (int i=0; i<str.size(); i++)
        char_count[str[i]-'a']++;

    // find most frequent char
    char most_frequent_char = 'a';
    for (int i=0; i<26; i++) {
        if (char_count[i] > char_count[most_frequent_char-'a'])
            most_frequent_char = i + 'a';
    }

    // find whether the given string length can accomodate the most fequent char
    if (str.size() < ((char_count[most_frequent_char-'a'] << 1)-1)) return "";

    // placing the most frequent character
    int index=0;
    while (char_count[most_frequent_char-'a']) {
        str[index] = most_frequent_char;
        char_count[most_frequent_char-'a']--;
        index += 2;
    }

    // placing the other chars
    for (int i=0; i<26; i++) {
        while (char_count[i] > 0) {
            if (index >= str.size()) index = 1;
            str[index] = i + 'a';
            char_count[i]--;
            index += 2;
        }
    }

    return str;
}


int main () {
    string str = "blflxll";
    cout << "After Transformation : " << rearrange_string(str) << endl;

    cout << endl;
    return 0;
}
