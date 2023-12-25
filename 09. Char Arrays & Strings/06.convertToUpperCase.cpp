#include <iostream>
#include <string.h>
using namespace std;

int get_string_len (char string[]) {
    int i=0;
    while (string[i] != '\0')
        i++;
    return i;
}

void convert_to_uppercase (char string[]) {
    for (int i=0; i<get_string_len(string); i++) {
        char ch = string[i];
        if ((ch >= 'a') && (ch <= 'z') && (ch != ' ')) 
            string[i] += 'A' - 'a';
    }
}

int main() {

    char string[100];
    cin.getline(string, 100);
    cout << "Before Transformation -> "<< string << endl;
    convert_to_uppercase(string);
    cout << "After Transformation -> "<< string << endl;
    
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
