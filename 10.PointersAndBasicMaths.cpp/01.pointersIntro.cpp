#include <iostream>
using namespace std;

int main () {
    // // to print address(hexa decimal value 8 Bytes with 64 bit CPU) of variable a.
    // int a = 5;
    // int b = 5;
    // int c = b; // copy created
    // cout << a << " -> " << &a << endl;
    // cout << b << " -> " << &b << endl;
    // cout << c << " -> " << &c << endl;

    // // creating pointers
    // int a = 5;
    // int *ptr = &a;
    // cout << "&a -> " << ptr << endl;
    // cout << "&a -> " << &a << endl;
    // cout << "&a -> " << &*ptr << endl;
    // cout << "a -> "<< a << endl;
    // cout << "a -> "<< *ptr << endl;
    // cout << "a -> "<< *&a << endl;
    // // access the value, pointer is pointing to. using derefencing operator(*)
    // // ++(*ptr) ===> value stored at location, stored in ptr variable
    // cout << "ptr -> " << " -> " << ptr << endl;
    // cout << "&ptr -> " << " -> " << &ptr << endl;

    // // size of pointer variable
    // int s = 5; int *s_ptr = &s;
    // char ch = 's'; char *ch_ptr = &ch;
    // double d = 1.03; double *d_ptr = &d;
    // cout << sizeof(s_ptr) << "   " << sizeof(ch_ptr) << "   " << sizeof(d_ptr);

    // // can we declare a pointer without assighning an address
    // int *ptr; // BAD PRACTICE
    // int a = 5;
    // cout << *ptr << endl; // some compilers rise segmentation error to this line if there is no address assighning done after
    // ptr = &a;
    // cout << *ptr << endl;
    // int *ptrr = 0; // NULL POINTER GOOD PRACTICE ===> {0, NULL, nullptr}
    // ptrr = &a;
    // cout << *ptrr << endl; // some compilers rise segmentation error to this line

    // // pointer arithmatics
    // int a = 5;
    // int *ptr = &a;
    // cout << "*ptr + 1 -> " << *ptr + 1 << endl; 
    // cout << "ptr -> " << ptr << endl; 
    // cout << "ptr + 1 -> " << ptr + 1 << endl; 
    // // 
    // cout << "*ptr -> "<< *ptr << endl;
    // *ptr = *ptr + 10;
    // cout << "*ptr -> "<< *ptr << endl;
    // cout << "(*ptr)*2 -> "<< (*ptr)*2 << endl;
    // cout << "(*ptr)++ -> "<< (*ptr)++ << endl;
    // cout << "++(*ptr) -> "<< ++(*ptr) << endl;
    // cout << "*ptr*(*ptr/2) -> " << *ptr*(*ptr/2) << endl;

    // // can we copy a pointer 
    // int a = 5;
    // int *ptr1 = &a;
    // int *ptr2 = ptr1;
    // cout << ptr1 << "   " << ptr2 << endl;
    // cout << &ptr1 << "   " << &ptr2 << endl;
    // cout << *ptr1 << "   " << *ptr2 << endl;
    // cout << ++(*ptr1) << "   " << ++(*ptr2) << endl; // IMP
    // int *ptr3 = ptr2;
    // cout << *ptr1 + *ptr2 + *ptr3 << endl;

    cout << endl << endl << endl;
    return 0;
}
