// What is Function?
// It is Linked with a well defined task.
#include <iostream>
using namespace std;

void print_name(int n_num_of_times) { // here we are getting arguements as input
    char name = 'S';
    for (int itr = 0; itr < n_num_of_times; itr++) {
        cout << name << endl;
    }
}

int main() {

    int n;
    cout << "Enter number of times you want to print your name : ";
    cin >> n;
    cout << endl;

    print_name(n); // here n is an arguement

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
