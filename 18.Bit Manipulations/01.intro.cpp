/*
1. int a = 0; ~a == -1; ===> How?
2. But on Bit level not od 0 ===> 1 & not of 1 ===> 0,
3. AND(&), OR(|), XOR(^ ===> "same input results zero output"), NOT(~).
4. LEFT SHIT(<<), RIGHT SHIFT(>>)  Bit level 1 << 1 ===> 10(Binary) OR 
    *2^1; a(decimal) << i(decimal) ===> a*2^i.
5. a(decimal) >> i(decimal) ===> a / 2^i;
6. decimal to Binary, Binary to decimal, 1's complement, 2's complement, sign bit in integers,
7. Bitwise OPerators &, |, ^, ~, <<, >>.
*/
#include<iostream>
using namespace std;

bool is_it_odd(int x) {
    return x & 1;
}

int main() {
    int input = 4;

    cout << "Is it odd? : " << is_it_odd(input) << endl;

    cout << endl << endl << endl;
    return 0;
}
