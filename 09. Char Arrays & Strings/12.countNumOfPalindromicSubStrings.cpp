// https://leetcode.com/problems/palindromic-substrings/description/
#include <iostream>

using namespace std;

int expand_around_center (string &str, int start, int end) {
    int count = 0;
    while ((start >= 0) && (end <= str.length()-1) && (str[start] == str[end])) {
        start--, end++;
        count++;
    }
    return count;
}


int find_num_of_palindromic_sub_strings (string &str) {
    int num_of_sub_palindromes = 0, odd_case, even_case;
    for (int center=0; center<str.length(); center++) {
        odd_case = expand_around_center(str, center, center);
        even_case = expand_around_center(str, center, center+1);
        num_of_sub_palindromes += odd_case + even_case;
    }
    return num_of_sub_palindromes;
}

int main() {
    string str = "abc";
    cout << find_num_of_palindromic_sub_strings(str) << endl;
    return 0;
}
