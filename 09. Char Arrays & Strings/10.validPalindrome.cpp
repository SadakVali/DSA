#include <iostream>
using namespace std;

bool check_palindrome (string &s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++, end--;
    }
    return true;
}

bool check_palindrome_with_atmost_1_char_deletion (string &s) {
    int start = 0, end = s.length()-1;
    while (start < end) {
        if (s[start] != s[end]) 
            return check_palindrome(s, start+1, end) || check_palindrome(s, start, end-1);
        start++, end--;
    }
    return true;
}

// https://leetcode.com/problems/valid-palindrome-ii/
int main() {
    // string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
    string s = "appppa";
    cout << "Check Palindrome : " << check_palindrome_with_atmost_1_char_deletion(s) << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
