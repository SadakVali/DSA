#include <iostream>
#include <string.h>
using namespace std;

bool is_this_palindrome (char string[]) {
    int start = 0, end = strlen(string)-1;
    while (start < end) {
        if (string[start] != string[end]) 
            return false;
        start++, end--;
    }
    return true;
}

int main() {
    char string[100];
    cin.getline(string, 100);
    cout << "Palindrome check -> " << is_this_palindrome(string) << endl;
    
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
