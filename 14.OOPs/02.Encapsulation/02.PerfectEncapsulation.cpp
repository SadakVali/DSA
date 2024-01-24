#include<iostream>
using namespace std;

// all data members are private
class Animal {
    private:
        int age;
        int weight;
    public:
        void eat() {
            cout << "Eating started..." << endl;
        }
        void set_age(int age) {
            this->age = age;
        }
        void set_weight(int weight) {
            this->weight = weight;
        }
        int get_age() {
            return this->age;
        }
        int get_weight() {
            return this->weight;
        }
};


int main() {
    cou t<< "Hello Perfect Encapsulation..." << endl;
    cout << endl << endl << endl;
    return 0;
}
