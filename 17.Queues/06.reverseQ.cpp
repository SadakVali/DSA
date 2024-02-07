#include<bits/stdc++.h>
using namespace std;

// TC ===> O(n) & SC ===> O(n)
void reverse_ele_in_queue_with_stack(queue<int> &q) {
    stack<int> st;
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
};

// TC ===> O(n) & SC ===> O(n)
void reverse_ele_in_queue_with_recurtion(queue<int> &q) {
    if (q.empty()) return;
    int front = q.front();
    q.pop();
    reverse_ele_in_queue_with_recurtion(q);
    q.push(front);
};


int main() {

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    // reverse_ele_in_queue_with_stack(q);
    reverse_ele_in_queue_with_recurtion(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl << endl << endl;
    return 0;
}
