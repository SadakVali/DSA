#include<iostream>
using namespace std;

inline void number_show(int num) {
    cout << num << endl;
    cout << num*2 << endl;
    cout << num*3 << endl;
}

/*
1. If you are calling number_show a number of times then it is better 
to use inlione function to overcome function calling overhead.
2. Used with small sized functions. So that executables are small(handled 
automatically by compiler optimisation levels)
*/
int main() {

    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);
    number_show(6);

    cout << endl << endl << endl;
    return 0;
}
