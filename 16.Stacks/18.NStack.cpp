#include<bits/stdc++.h>
using namespace std;

class NStack {
    int *a, *top, *next;
    int n;         // # stacks
    int size;      // size of main array
    int free_spot; // index of next free space in the main array

    public: 
        // ctor(constructor)
        NStack(int _n, int _s) : n(_n), size(_s) {
            free_spot = 0;
            top = new int[n];
            a = new int[size];
            next = new int[size];

            for (int i=0; i<n; ++i) 
                top[i] = -1;
            for (int i=0; i<size; ++i)
                next[i] = i+1;
            next[size-1] = -1;
        };

        // pushes x into m_th stack
        bool push(int x, int m) {
            if (free_spot == -1) 
                return false; // stack overflow
            // 1. find index
            int index = free_spot;
            // 2. update free_spot
            free_spot = next[index];
            // 3. insert
            a[index] = x;
            // 4. update next
            next[index] = top[m-1];
            // 5. update top
            top[m-1] = index;
            return true; // push successful
        };

        // pops top element from the m_th stack
        int pop(int m) {
            if (top[m-1] == -1) 
                return false; // stack underflow
            int index = top[m-1];
            top[m-1] = next[index];
            int popped_ele = a[index];
            next[index] = free_spot;
            free_spot = index;
            return popped_ele;
        };

        // dtor(destructor)
        ~NStack() {
            delete []a;
            delete []top;
            delete []next;
        };
};


int main() {
    NStack st(3, 6);
    // // 1 st test
    // cout << st.push(10, 1) << endl;
    // cout << st.pop(1) << endl;

    // // 2 nd test
    // cout << st.push(10, 1) << endl;
    // cout << st.push(10, 1) << endl;
    // cout << st.push(10, 1) << endl;
    // cout << st.push(10, 1) << endl;
    // cout << st.push(10, 1) << endl;
    // cout << st.push(11, 1) << endl;
    // cout << st.push(12, 1) << endl;
    // cout << st.pop(1) << endl;

    // 3 rd test
    cout << st.push(10, 1) << endl;
    cout << st.push(10, 1) << endl;
    cout << st.push(10, 1) << endl;
    cout << st.push(14, 2) << endl;
    cout << st.push(15, 3) << endl;
    cout << st.pop(1) << endl;
    cout << st.pop(2) << endl;
    cout << st.pop(3) << endl;

    cout << endl << endl << endl;
    return 0;
}
