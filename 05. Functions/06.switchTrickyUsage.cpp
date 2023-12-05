#include <iostream>
using namespace std;

char get_grade(int marks) {
    // if there is no return in the switch then you have to use break
    // what is trickey in here. we are using marks with range of [0, 100] by 
    // shrinking it's range to [0, 10] and then applying 10 cases.
    // if the range is not shrinked the we have to write 100 cases
    switch(marks/10) {
        case 10: 
        case 9: 
            return 'A';
        case 8: 
            return 'B';
        case 7: 
        case 6: 
            return 'C';
        case 5: 
        case 4:
            return 'D';
        default: 
            return 'F';
    }
}

int main() {

    // int marks;
    // cout << "Please netre your marks : ";
    // cin >> marks;
    // cout << endl;

    // char grade = get_grade(marks);
    // cout << grade << endl;

    // for (int i = 0; i <=100; i++) {
    //     char grade = get_grade(i);
    //     cout << "Grade for marks " << i << " is " << grade << endl;
    // }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
