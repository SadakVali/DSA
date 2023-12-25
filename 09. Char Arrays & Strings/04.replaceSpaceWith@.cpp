#include <iostream>
#include <string.h>
using namespace std;

void replace_space_with_given_symbol (char arr[]) {
    for (int i=0; i<strlen(arr); i++) {
        if (arr[i] == ' ')
            arr[i] = '@';
    }
}

int main() {

    char name[100];
    cout << "Enter your test query string -> ";
    cin.getline(name, 100);
    cout << "Before replacing -> " << name << endl;
    replace_space_with_given_symbol(name);
    cout << "After replacing -> " << name << endl;


    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
