#include<bits/stdc++.h>
using namespace std;

// TC ===> O(n) & SC ===> O(n)
void reverse_first_k_ele_in_queue_with_stack(queue<int> &q, int k, int size) {
    if ((k <= 0) || (k > q.size())) return;
    stack<int> st;
    while (q.size() != (size-k)) {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    int count = size-k;
    while (count--) {
        q.push(q.front());
        q.pop();
    }
};

// TC ===> O(n) & SC ===> O(k)
void reverse_first_k_ele_in_queue_with_recurtion(queue<int> &q, int k, int size) {
    if (q.size() == (size-k)) return;
    int front = q.front();
    q.pop();
    reverse_first_k_ele_in_queue_with_recurtion(q, k, size);
    q.push(front);
};

void recursion_helper(queue<int> &q, int k, int size) {
    if ((k <= 0) || (k > q.size())) return;
    reverse_first_k_ele_in_queue_with_recurtion(q, k, size);
    int count = q.size()-k;
    while (count--) {
        q.push(q.front());
        q.pop();
    }
};


int main() {

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    int k = 0;
    // reverse_first_k_ele_in_queue_with_stack(q, k, q.size());
    recursion_helper(q, k, q.size());

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl << endl << endl;
    return 0;
}
