#include <iostream>
#include <string.h>
using namespace std;

int get_length (char arr[]) {
    int i=0;
    // cout << &arr << endl;
    while (arr[i] != '\0')
        i++;
    return i;
}

int main() {

    char name[100];
    cin.getline(name, 100);
    // cout << &name << endl;
    cout << "The number of characters entered by user : " << get_length(name) << endl;

    // usage of strlen function
    cout << strlen(name) << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
