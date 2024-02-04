#include<bits/stdc++.h>
using namespace std;

class Car {
    public:
        int position, speed;
        Car (int p, int s) : position(p), speed(s) {};
};

bool my_comparator(Car &a, Car &b) {
    return a.position < b.position;
};

int num_of_car_fleets(int &target, vector<int> &positions, vector<int> &speeds) {
    vector<Car> cars;
    for (int i=0; i<positions.size(); ++i) {
        Car car(positions[i], speeds[i]);
        cars.push_back(car);
    }
    sort(cars.begin(), cars.end(), my_comparator);

    stack<float> st;
    for (Car car : cars) {
        float time = (target - car.position) / ((float) car.speed);
        while (!st.empty() && time >= st.top()) 
            st.pop();
        st.push(time);
    }
    return st.size();
};


// https://leetcode.com/problems/car-fleet/description/
int main() {

    int target = 12;
    vector<int> positions = {10,8,0,5,3};
    vector<int> speeds = {2,4,1,1,3};

    cout << num_of_car_fleets(target, positions, speeds) << endl;

    cout << endl << endl << endl;
    return 0;
}
