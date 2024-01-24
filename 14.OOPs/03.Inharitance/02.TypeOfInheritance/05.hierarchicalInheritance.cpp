#include<iostream>
using namespace std;

class Car {};

class sadiq {
    public:
        int age;
        int speed;

        void speed_up() {
            cout << "Speeding up the game..." << endl;
        };
};

class Scorpio : public Car {};
class Fortuner : public Car {};

int main() {

    Scorpio s11;
    Fortuner f11;
    s11.speed_up();
    f11.speed_up();

    cout << endl << endl << endl;
    return 0;
}
