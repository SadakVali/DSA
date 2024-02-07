#include<bits/stdc++.h>
using namespace std;

class CircularQueue {
    int *arr;  // CircularQueue pointer
    int size;  // size of the CircularQueue
    int front; // index of first ele of the queue
    int rear;  // index of last ele in the queue

    public:
        CircularQueue(int _size) : size(_size) {
            arr = new int[_size];
            front = rear = -1;
        };
        ~CircularQueue() {
            delete[] arr;
        };
        void push(int data) {
            // Queue full
            if (is_q_full()) 
                cout << "CircularQueue is Full..." << endl;
            // single element case -> first element
            else if (is_q_empty()) {
                rear = front = 0;
                arr[rear] = data;
            // circular nature of the Queue
            } else if ((rear == (size-1)) && (front != 0)) { 
                rear = 0;
                arr[rear] = data;
            // normal flow
            } else 
                arr[++rear] = data;
        };
        void pop() {
            // Queue empty
            if (is_q_empty()) 
                cout << "CircularQueue is empty..." << endl;
            // single element case ->first element
            else if (front == rear) // happens @ front == 0 && rear == 0
                front = rear = -1;
            // circular nature of the Queue
            else if (front == (size-1))
                front = 0;
            // normal flow
            else 
                ++front;
        };
    private:
        bool is_q_empty() {
            return front == -1; // rear == -1;
        };
        bool is_q_full() {
            // return (((rear+1) == size) && (front==0)) || ((rear+1) == front);
            // return ((rear+1) % size) == front;
            return ((front==0) && (rear == (size-1))) || (rear == (front-1));
            // return rear == ((front-1) % (size-1)); 
        };
};


int main() {

    CircularQueue q(3);

    q.pop(); // popped element won't be returned
    q.push(23); // insertion
    q.push(33); 
    q.push(43); 
    q.push(53); 
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    cout << endl << endl << endl;
    return 0;
}
