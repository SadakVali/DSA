#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird {
    public: 
        /*
        classes that inherit this class has to impliment pure virtual fns.
        */
        virtual void eat() = 0;
        virtual void fly() = 0;
};

class sparrow: public Bird {
    private:
        void eat() {
            cout << "Sparrow is eating..." << endl;
        };
        void fly() {
            cout << "Sparrow is flying..." << endl;
        };
};

class eagle: public Bird {
    private:
        void eat() {
            cout << "Eagle is eating..." << endl;
        };
        void fly() {
            cout << "Eagle is flying..." << endl;
        };
};

class pigeon: public Bird {
    private:
        void eat() {
            cout << "Pigeon is eating faster..." << endl;
        };
        void fly() {
            cout << "Pegion is flying faster..." << endl;
        };
};

#endif // BIRD_H
