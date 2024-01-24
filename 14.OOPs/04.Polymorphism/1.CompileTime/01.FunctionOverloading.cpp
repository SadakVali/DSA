#include<iostream>

using namespace std;

class Maths {
    public:
        int sum(int a, int b) {
            cout << "I am first Signature... : ";
            return a+b;
        }
        /*
        By changing return types we can achieve function overloading
        double sum(int a, int b) {
            cout << "I am first Signature... : ";
            return a+b;
        }
        */
        int sum(int a, int b, int c) {
            cout << "I am second Signature... : ";
            return a+b+c;
        }
        float sum(int a, float b) {
            cout << "I am third Signature... : ";
            return a+b;
        }
};


int main() {
    Maths obj;
    cout << obj.sum(1, 2, 3) << endl;
    cout << obj.sum(1, 2) << endl;
    cout << obj.sum(1, 4.5f) << endl; // by default 4.5 is treated as double
    cout << endl << endl << endl;
    return 0;
}
