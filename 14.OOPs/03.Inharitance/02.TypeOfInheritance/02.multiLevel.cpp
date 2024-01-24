#include<iostream>
using namespace std;

/*
Q ::: Why we need multi level inheritance
ANS ::: code reusability
*/
class Fruit {
    public:
        string name;
};

class Mango: public Fruit {
    public:
        int weight;
};

class Alphanzo: public Mango {
    public:
        int sugar_level;
};


int main() {

    Alphanzo obj;
    cout << obj.name << " " << obj.weight << " " << obj.sugar_level;

    cout << endl << endl << endl;
    return 0;
}
