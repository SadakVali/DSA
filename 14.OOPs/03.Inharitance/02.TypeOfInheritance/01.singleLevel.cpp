#include<iostream>
using namespace std;

class Car {
    public:
        int age;
        int weight;
        string name;

        void speed_up() {
            cout << "Speeding up the game..." << endl;
        }
        void press_break() {
            cout << "Applying Pressure on break..." << endl;
        }
};

class Scorpio: public Car {};


int main() {
    Scorpio sadiqs_car;
    sadiqs_car.speed_up();

    cout << endl << endl << endl;
    return 0;
}
