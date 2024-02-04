#include<bits/stdc++.h>
using namespace std;

class Stack {
    private:
        int *arr;
        int length, top1, top2;
    public:
        Stack(int _length) : length(_length) {
            arr = new int[length];
            top1 = -1;
            top2 = length;
        };
        void push1(int _data) {
            if (top2 - top1 > 1) arr[++top1] = _data;
            else cout << "Stack 1 Overflow..." << endl;
        };
        void push2(int _data) {
            if (top2 - top1 > 1) arr[--top2] = _data;
            else cout << "Stack 2 Overflow..." << endl;
        };
        void pop1() {
            if (top1 > -1) --top1;
            else cout << "Stack 1 Underflow..." << endl;
        };
        void pop2() {
            if (top2 < length) top2++;
            else cout << "Stack 2 Underflow..." << endl;
        };
};


int main() {
    Stack stack(10);
    stack.push1(1);
    stack.push1(2);
    stack.push1(3);
    stack.push1(4);
    stack.push1(5);
    stack.push1(6);
    stack.push1(7);
    stack.push1(8);
    stack.push2(20);
    stack.push2(10);

    stack.push2(9);

    cout << endl << endl << endl;
    return 0;
}
