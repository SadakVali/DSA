#include<iostream>
using namespace std;

/*
1. Macros are preprocessor directives that allow you to define constants, 
functions or code snippets that can be used throughout your code. 
They are typically defined using the #define directive and are 
evaluated by the preprocessor before the code is compiled.
2. Macros can be used for a variety of purposes, such as defining 
constants or creating shorthand for commonly used expressions.
*/ 
#define PI 3.1415
#define MAX(x, y) (x >= y ? x : y)

float circle_area(float r) {
    return PI*r*r;
}

float circle_perimeter(float r) {
    return 2*PI*r;
}

int main() {
    cout << circle_area(MAX(10.5, 10.9)) << endl;
    cout << endl << endl << endl;
    return 0;
}
