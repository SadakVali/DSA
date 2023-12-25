#include <iostream>
#include <string.h>
using namespace std;

void reverse_char_array (char arr[], int num_of_chars) {
    int start=0, end=num_of_chars-1;
    cout << &arr << endl;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

int main() {

    char name[100] = "sadiq Vali";
    cout << name << endl;
    cout << &name << endl;
    int num_of_chars = strlen(name);
    reverse_char_array(name, num_of_chars);
    cout << name << endl;
    
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
