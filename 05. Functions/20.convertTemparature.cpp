#include <iostream>
using namespace std;

void convert_temparatures (double celsius) {
    double kelvin = celsius + 273.15;
    double fahrenheit = (celsius * 1.80) + 32.00;
    cout << kelvin << "   " << fahrenheit << endl;
}

int main() {

    double celsius = 36.50;
    convert_temparatures(celsius);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
