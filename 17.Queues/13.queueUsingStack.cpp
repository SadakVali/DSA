#include<bits/stdc++.h>
using namespace std;

// SC ===> O(n) 
class QueueWithStacks {
    stack<int> st1, st2;
    public:
        // TC ===> O(1) 
        void push(int x) {
            st1.push(x);
        };
        // TC ===> O(n) 
        int pop() {
            if (st2.empty()) {
                if (st1.empty()) return -1;
                while (!st1.empty()) {
                    st2.push(st1.top());
                    st1.pop();
                }
            }
            int pop = st2.top();
            st2.pop();
            return pop;
        };
        // TC ===> O(n) 
        int front() {
            if (st2.empty()) {
                if (st1.empty()) return -1;
                while (!st1.empty()) {
                    st2.push(st1.top());
                    st1.pop();
                }
            }
            return st2.top();
        };
        // TC ===> O(1) 
        bool empty() {
            return st1.empty() && st2.empty();
        };
};


// https://leetcode.com/problems/implement-queue-using-stacks/description/
int main() {

    QueueWithStacks q;
    q.push(10);
    q.push(20);
    cout << q.front() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;

    cout << endl << endl << endl;
    return 0;
};
