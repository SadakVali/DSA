#include<bits/stdc++.h>
using namespace std;

class KQueues {
    int n, k, free_spot;
    int *arr, *front, *rear, *next;
    public:
        // ctor
        KQueues(int _n, int _k) : n(_n), k(_k), free_spot(0) {
            arr = new int[n];
            next = new int[n];
            front = new int[k];
            rear = new int[k];
            for (int i=0; i<k; ++i)
                front[i] = rear[i] = -1;
            for (int i=0; i<n; ++i)
                next[i] = i+1;
            next[n-1] = -1;
        };
        // push x into the m_th queue
        bool push(int x, int m) {
            // check for overflow
            if (free_spot == -1) return false;
            // find first free index
            int index = free_spot;
            // update freespot
            free_spot = next[index];
            // if inserting first ele in the m_th Q
            if (front[m] == -1) 
                front[m] = index;
            // link new element to the m_th Q's last rear ele
            else 
                next[rear[m]] = index;
            // update next
            next[index] = -1;
            // update rear
            rear[m] = index;
            // push the element
            arr[index] = x;
            return true;
        };
        // pop element from the m_th Q
        int pop(int m) {
            // check for underflow
            if (front[m] == -1) return -1;
            // find index to pop
            int index = front[m];
            // update front
            front[m] = next [index];
            // update next
            next[index] = free_spot;
            // update free spot
            free_spot = index;
            return arr[index];
        };
};


int main() {

    KQueues kq(8, 3);
    cout << kq.push(1, 0) << endl;
    cout << kq.push(2, 0) << endl;
    cout << kq.push(5, 1) << endl;
    cout << kq.push(3, 0) << endl;
    cout << kq.pop(1) << endl;
    cout << kq.pop(0) << endl;
    cout << kq.pop(0) << endl;
    cout << kq.pop(0) << endl;
    cout << kq.pop(1) << endl;
    cout << kq.pop(0) << endl;

    cout << endl << endl << endl;
    return 0;
};
