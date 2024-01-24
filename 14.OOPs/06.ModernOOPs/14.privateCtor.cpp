#include<iostream>
using namespace std;

class Box {
    private:
        int width;
        Box(int _w) : width(_w) {}; // ctor
    public:
        int get_width() {
            return this->width;
        };
        void set_width(int _val) {
            this->width = _val;
        };
    friend class BoxFactory;
};

class BoxFactory {
    private:
        int count = 0;
    public:
        Box getBox(int _w) {
            ++count;
            return Box(_w);
        };
        int get_count() {
            return this->count;
        };
};


int main() {
    BoxFactory b_fact;
    Box b = b_fact.getBox(5);
    cout << b.get_width() << " " << b_fact.get_count() << endl;

    cout << endl << endl << endl;
    return 0;
}
