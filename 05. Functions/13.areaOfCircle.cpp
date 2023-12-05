#include <iostream>
using namespace std;

float circle_area (float radius) {
    return 3.14 * radius * radius;
}

int main() {

    float radius = 5.323;
    cout << "Enter the Circle Radius : ";
    cin >> radius;
    cout << endl;

    float area = circle_area(radius);
    cout << "Computed Area of circle is : " << area << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
