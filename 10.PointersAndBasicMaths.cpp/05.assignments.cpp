#include <iostream>
using namespace std;

void change_sign (int *p) {
    *p = (*p) * -1;
}

void fun (int a[]) {
    cout << sizeof(a) << endl; // call by referance
    cout << a[0] << " ";
}

void square (int *p) {
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}

void Q (int z) {
    z += z;
    cout << z << " "; // 14" "
}

void P (int *y) {
    int x = *y + 2; // 7
    Q(x);
    *y = x - 1; // x in main function = 6
    cout << x << " "; // 7" "
}

int f (int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1; // main c = 5
    z = **ppz; // 4 + y + 5
    *py += 2; // main c = 7
    y = *py; // 4 + 7 + 5
    x += 3; // 7 + 7 + 5
    return x + y + z; // 7 + 7 + 5
}

void increment (int **p) {
    (**p)++; // makes num variable +1
}


int main () {
    // // 1.
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p;

    // // 2. 
    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout << a << " " << b << endl;

    // // 3. 
    // int *ptr = 0; // null pointer
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;

    // // 4. 
    // int b = 10;
    // int *a = &b;
    // cout << a << endl;

    // // 5. 
    // char ch = 'a';
    // char* ptr = &ch;
    // ch++; // char + int => int
    // // ch = 99; // when you store int in the char variable it will use ASCII values to decode the info later
    // cout << *ptr << endl;

    // // 6. 
    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout << a << " " << *c << endl;

    // // 7. 
    // int a = 7;
    // int *c = &a;
    // c = c + 3; // if c = 400 then c + 3 => 412
    // cout << c << endl;

    // // 8. 
    // double a = 10.54;
    // double *d = &a;
    // d = d + 1;
    // cout << d << endl;

    // // 9.
    // int a[5];
    // int *c;
    // cout << sizeof(a) << " " << sizeof(c) << endl;

    // // 10. 
    // int a[] = {1,2,3,4};
    // cout << *(a) << " " << *(a+1) << endl;

    // // 11. 
    // int a[3] = {1,2,3};
    // cout << *(a+2) << endl;

    // // 12. 
    // int a[] = {1,2,3,4};
    // cout << a << endl;
    // int *p = a++;  // constant pointers can not change their value. THIS WILL RISE ERROR
    // cout << *p << endl;

    // // 13. 
    // int arr[] = {4,5,6,7};
    // int *p = (arr + 1);
    // cout << *arr + 9 << endl;

    // // 14. 
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout << c << endl;

    // // 15. 
    // char s[] = "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0] << endl;

    // // 16. 
    // char arr[20];
    // int i;
    // for (i=0; i<10; i++)
    //     *(arr+i) = 65 + i;
    // *(arr+i) = '\0';
    // cout << arr << endl;

    // // 17. 
    // char *ptr;
    // char Str[] = "abcdefg";
    // ptr = Str;
    // ptr += 5;
    // cout << ptr << endl;

    // // 18. 
    // int numbers[5];
    // int * p;
    // p = numbers;
    // *p = 10;
    // p = &numbers[2];
    // *p = 20;
    // p--;
    // *p = 30;
    // p = numbers + 3;
    // *p = 40;
    // p = numbers;
    // *(p+4) = 50;
    // for (int n=0; n<5; n++)
    //     cout << numbers[n] << ",";

    // // 19. 
    // char st[] = "ABCD";
    // for (int i=0; st[i]!='\0'; i++)
    //     cout << st[i] << *(st)+i << *(i+st) << i[st];

    // // 20. 
    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout << *ptr2 << " ";
    // cout << ptr2 - ptr1;

    // // 21. 
    // int a = 10;
    // change_sign(&a);
    // cout << a << endl;

    // // 22. 
    // int a[] = {1,2,3,4,5,6,7,8,9,10};
    // cout << sizeof(a) << endl;
    // fun(a+1);
    // cout << a[0];

    // // 23. 
    // int a = 10;
    // square(&a);
    // cout << a << endl;

    // // 24. 
    // int x = 5;
    // P(&x);
    // cout << x; // 6

    // // 25. 
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout << a << " " << b << endl;

    // // 26. 
    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout << f(c, b, a);

    // // 27. 
    // int ***r, **q, *p, i=8;
    // p = &i; // *p -> i
    // (*p)++; // i => 9
    // q = &p; // **q -> *p
    // (**q)++; // i => 10
    // r = &q; // ***r -> **q
    // cout << *p << " " << **q << " " << ***r;

    // 28. 
    int num = 10;
    int *ptr = &num; // *ptr -> num
    increment(&ptr); // **p -> *ptr
    cout << num << endl;

    cout << endl << endl << endl;
    return 0;
}
