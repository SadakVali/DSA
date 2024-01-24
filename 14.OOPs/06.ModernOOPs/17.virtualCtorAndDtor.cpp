#include<iostream>
using namespace std;

/*
VIRTUAL IN C++ ::: 
1. Way to achieve Runtime polymorphism.

HOW DOES "VIRTUAL" WORK? ::: 
1. VTables
    1. Formed for every class having at least one virtual function and 
    for its derived classes also.
    2. It is a static array, hance 1 instance for a class.
    3. Vptr(a hidden member pointer) is added by the compiler to the 
    classes with virtual and its derived classes.
    4. Depending upon the object type Vprt is bonded to a Vtable.
2. Vtables are created at compile time.
3. When object of a particular type is created at runtime, there will be 
a Vptr which will be initialised to point to a static Vtable at the time 
of construction.

CAN WE MAKE VIRTUAL CTOR? ::: 
1. No.
2. Constructor can not be virtual, because when constructor of a class is 
executed there is no virtual table in the memory, means no virtual pointer 
defined yet. So, the constructor should always be non-vertual.
3. A virtual call is a mechanism to get work done given partial information. 
In particular, "virtual" allows us to call a function knowing only any 
interfaces and not the exact type of the object. To create an object you 
need complete information. In particular, you need to know the exact 
type of what you want to create. Consequently, a "call to a constructor" 
can not be virtual.

CAN WE MAKE VIRTUAL DTOR? ::: 
1. Yes.
2. It is really imortant to handle proper destruction of Derived classes.
*/

class Base {
    public:
        Base() {
            cout << "Base ctor..." << endl;
        };
        virtual ~Base() {
            cout << "Base dtor..." << endl;
        };
};

class Derived: public Base {
    int *a;
    public:
        Derived() {
            a = new int[1000];
            cout << "Derived ctor..." << endl;
        };
        ~Derived() {
            delete [] a;
            cout << "Derived dtor..." << endl;
        };
};


int main() {

    Base *b = new Derived(); // upcasting
    delete b;

    cout << endl << endl << endl;
    return 0;
}
