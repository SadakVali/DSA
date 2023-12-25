// https://leetcode.com/problems/reverse-vowels-of-a-string/
#include <iostream>

using namespace std;

void reverse_vowels_in_the_string1 (string &str) {
    int vowel_table[256] = {0};
    string vowels = "aeiouAEIOU";
    for (int i=0; i<vowels.size(); i++)
        vowel_table[vowels[i]]++;
    int start=0, end=str.size()-1;
    while (start < end) {
        if (vowel_table[str[start]] && vowel_table[str[end]]) {
            swap(str[start], str[end]);
            start++, end--;
        }
        else if (vowel_table[str[start]] == 0)
            start++;
        else 
            end--;
    }
}

bool is_it_vowel (char ch) {
    ch = tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

void reverse_vowels_in_the_string2 (string &str) {
    int left=0, right=str.size()-1;
    while (left < right) {
        if (is_it_vowel(str[left]) && is_it_vowel(str[right])) {
            swap(str[left], str[right]);
            left++, right--;
        } else if (is_it_vowel(str[left]) == 0)
            left++;
        else
            right--;
    }
}

int main () {
    string str = "leetcode";
    // reverse_vowels_in_the_string1(str);
    reverse_vowels_in_the_string2(str);
    cout << "After transformation : " << str << endl;
    return 0;
}
