#include<bits/stdc++.h>
using namespace std;

/*
QUEUE ::: FIFO (First In First Out) Data Structure
1. Examples of FIFO ::: 
    1. ATM counter
    2. Ticket counters
2. Like head and tail in LL here we have front and rear
    1. insertion(push) only @ rear side
    2. removal(pop) only @ front side
3. Queues mainly used in Traversals, Graphs, & Sliding Window Method
4. operations possible with queue
    1. queue.push(50)
    2. queue.pop()
    3. queue.front()
    4. queue.empty() ===> true / false
    5. queue.size()
    6. queue.front() ===> access the front element
    7. queue.back() ===> access the rear element
*/

int main() {

    queue<int> q; // creation
    q.push(23); // insertion
    q.push(33); 
    q.push(43); 
    cout << "Top element in the queue : " << q.front() << endl;
    cout << "Last element in the queue : " << q.back() << endl;
    cout << "Is queue empty : " << q.empty() << endl;
    cout << "Size of the queue : " << q.size() << endl;
    q.pop(); // popped element won't be returned
    cout << "Top element in the queue : " << q.front() << endl;
    cout << "Size of the queue after popping : " << q.size() << endl;

    cout << endl << endl << endl;
    return 0;
}
