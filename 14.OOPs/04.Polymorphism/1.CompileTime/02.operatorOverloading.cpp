#include<iostream>
using namespace std;

class OperatorOverloading {
    public:
        int val;
    
    int operator+(OperatorOverloading &obj) {
        return this->val - obj.val;
    };
};


int main() {
    OperatorOverloading obj1, obj2;
    obj1.val = 1;
    obj2.val = 2;
    // this should return difference b/w vals
    // a+b == a.add(b)
    cout << "Operator Overloading result : " << obj1 + obj2 << endl; 
    cout << endl << endl << endl;
    return 0;
}
