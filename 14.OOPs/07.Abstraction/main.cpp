#include<iostream>
#include "bird.h"
using namespace std;

/*

ABSTRACTION IN C++ ::: 
1. delivering only essential information to the outer world while masking 
the background details.
2. It is a design and programming method that seperates the interface from 
the implimnetation.
3. Real life examples, we use various functionalities of AirPods but don't 
know the actual implimnetation/working.

ABSTRACTION IN HEADER FILES ::: 
1. Function's implimnetation is hidden in the header files.
2. We could use the same program without knowing it's inside working.
3. Example, sort(), it is used to sort an array, a list, or a collection 
of item, and we know that if we give a container to sort, it will sort it, 
but we don't know which sorting algorithm it uses to sort that container.

ABSTRACTION USING CLASSES :::
1. Grouping data members and member functions into classes using access 
specifiers.
2. A class can choose which data members are visible to the outside world 
and which are hidden.

WHAT IS ABSTRACT CLASS? :::
1. Class that contains at least one pure virtual function, and these 
classes can not be instantiated.
2. It has come from the idea of Abstraction.

*/

void bird_activity(Bird *&bird) {
    bird->eat();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->fly();
    bird->fly();
    bird->fly();
};


int main() {

    // // vector<int> v = {3,54,6,7,4,23,2};
    // string v = "Sadiq Vali";
    // sort(v.begin(), v.end());
    // for (auto val : v) cout << val << " ";

    // Bird *bird = new sparrow();
    // Bird *bird = new eagle();
    Bird *bird = new pigeon();
    bird_activity(bird);

    // // we can not instantiate, a C++ inteface.
    // // we can not create object of an abstract class.
    // Bird *bird2 = new Bird(); 

    cout << endl << endl << endl;
    return 0;
}
