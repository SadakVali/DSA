#include<bits/stdc++.h>
using namespace std;

class Queue {
    int *arr;  // Queue pointer
    int size;  // size of the Queue
    int front; // index of first ele of the queue
    int rear;  // index of the next ele that can be pushed into the Queue
    // if front == size-1 ===> rear == size

    public:
        Queue(int _size) : size(_size) {
            arr = new int[size];
            front = rear = 0;
        };
        void push(int _data) {
            if (rear == size) 
                cout << "Queue is Full..." << endl;
            else 
                arr[rear++] = _data;
        };
        void pop() {
            if (front == rear) 
                cout << "Queue is empty..." << endl;
            else if (front+1 == rear)
                front = rear = 0;
            else 
                ++front;
        };
        int get_front() {
            if (front == rear) {
                cout << "Queue is empty..." << endl;
                return -1;
            } else 
                return arr[front];
        };
        int get_size() {
            return rear - front;
        }
        bool empty() {
            return front == rear;
        };
};


int main() {

    Queue q(10);

    q.push(23); // insertion
    q.push(33); 
    q.push(43); 
    cout << "Top element in the queue : " << q.get_front() << endl;
    cout << "Is queue empty : " << q.empty() << endl;
    cout << "Size of the queue : " << q.get_size() << endl;
    q.pop(); // popped element won't be returned
    cout << "Top element in the queue after popping : " << q.get_front() << endl;
    cout << "Size of the queue after popping : " << q.get_size() << endl;

    cout << endl << endl << endl;
    return 0;
}
