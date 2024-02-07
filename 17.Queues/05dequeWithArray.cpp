#include<bits/stdc++.h>
using namespace std;
/*
1. Types of Queues 
    1. Input Restricted Queue, ===> input(push/enqueue) possible @ rear 
        side only, but output(pop/dequeue) can be done on front side and 
        on rear sides
    2. ouput Restricted Queue, ===> output(pop/dequeue) possible @ front 
        size only, but input(push/enqueue) can be done on front side and 
        reare sides
    3. Doubly Ended Queue,(pronouced as deck) ===> can dequeued and enqueued 
        on both sides
*/


class Deque {
    int *arr;  // CircularQueue pointer
    int size;  // size of the CircularQueue
    int front; // index of first ele of the queue
    int rear;  // index of last ele in the queue
    public:
        Deque(int _size) : size(_size) {
            arr = new int[size];
            front = rear = -1;
        };
        ~Deque() {
            delete []arr;
        };
        // same as push in the Normal Queue
        void push_rear(int data) {
            if (is_q_full()) 
                cout << "CircularQueue is Full..." << endl;
            else if (is_q_empty()) {
                rear = front = 0;
                arr[rear] = data;
            } else if ((rear == (size-1)) && (front != 0)) { 
                rear = 0;
                arr[rear] = data;
            } else 
                arr[++rear] = data;
        };
        // same as pop in the Normal Queue
        void pop_front() {
            if (is_q_empty()) 
                cout << "CircularQueue is empty..." << endl;
            else if (front == rear)
                front = rear = -1;
            else if (front == (size-1))
                front = 0;
            else 
                ++front;
        };
        void push_front(int data) {
            if (is_q_full()) 
                cout << "CircularQueue is Full..." << endl;
            else if (is_q_empty()) {
                rear = front = 0;
                arr[front] = data;
            } else if ((front == 0) && (rear != (size-1))) { 
                front = size-1;
                arr[front] = data;
            } else 
                arr[--front] = data;
        };
        void pop_rear() {
            if (is_q_empty()) 
                cout << "CircularQueue is empty..." << endl;
            else if (front == rear)
                front = rear = -1;
            else if (rear == 0)
                rear = size-1;
            else 
                --rear;
        };
    private:
        bool is_q_empty() {
            return front == -1;
        };
        bool is_q_full() {
            // return (((rear+1) == size) && (front==0)) || ((rear+1) == front);
            return ((rear+1) % size) == front;
        };
};


int main() {

    cout << endl << endl << endl;
    return 0;
}
