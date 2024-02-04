#include<bits/stdc++.h>
using namespace std;

/*
1. Stack Overflow ===> stack is full, you can not push new item.
2. Stack Underflow ===> stack is empty.
*/

class Stack {
    private:
        int *arr;
        int topp, length;
    public:
        // constructor
        Stack(int _length) {
            arr = new int[_length];
            length = _length;
            topp = -1;
        };
        // functionality
        void push(int _data) {
            if (length == 1 + topp) cout << "Stack Overflow..." << endl;
            else arr[++topp] = _data;
        };
        void pop() {
            if (!empty()) --topp;
            else cout << "Stack Underflow..." << endl;
        };
        int top() {
            if (!empty()) return arr[topp];
            else cout << "Stack Underflow..." << endl;
        };
        bool empty() {
            return topp == -1;
        };
        int size() {
            return topp + 1;
        };
};


int main() {

    Stack *stack = new Stack(2); // creation
    stack->push(23); // insertion
    stack->push(33); 
    stack->push(43); 
    cout << "Top element in the stack : " << stack->top() << endl;
    cout << "Is stack empty : " << stack->empty() << endl;
    cout << "Size of the stack : " << stack->size() << endl;
    stack->pop(); // popped element won't be returned
    cout << "Size of the stack after popping : " << stack->size() << endl;

    cout << endl << endl << endl;

    Stack stack2 = Stack(2); // creation
    stack2.push(23); // insertion
    stack2.push(33); 
    stack2.push(43); 
    cout << "Top element in the stack : " << stack2.top() << endl;
    cout << "Is stack empty : " << stack2.empty() << endl;
    cout << "Size of the stack : " << stack2.size() << endl;
    stack2.pop(); // popped element won't be returned
    cout << "Size of the stack after popping : " << stack2.size() << endl;
    stack2.pop(); // popped element won't be returned
    cout << "Size of the stack after popping : " << stack2.size() << endl;

    cout << endl << endl << endl;
    return 0;
}
