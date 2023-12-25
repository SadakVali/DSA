#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // // Taking entire name at once
    // char name[100];
    // cout << "Enter your name : ";
    // cin >> name;
    // cout << "Your name is : " << name << endl;
    // for (auto value: name) 
    //     cout << value;
    // cout << endl;
    // for (int i=0; i<100; i++) 
    //     cout << name[i];

    // // taking single chars seperately
    // char name[100];
    // name[0] = 'S';
    // name[1] = 'a';
    // name[2] = 'd';
    // cin >> name[3] >> name[4];
    // cout << "Your name is : " << name;

    // // null character(zero is it's ASCII value) will be stored after the end 
    // // of the string automaticlly
    // char name[11] = "Sadiq Vali";
    // cout << name << endl;
    // for (int i=0; i<11; i++)
    //     cout << (int)name[i] << "   ";
    // cout << endl;

    // to get strings with space in input from keyboard
    char name[100];
    cin.getline(name, 50);
    cout << name;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
