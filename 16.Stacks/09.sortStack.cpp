#include<bits/stdc++.h>
using namespace std;

void insert_in_sorted_stack(stack<int> &st, int &data) {
    if (st.empty() || st.top() >= data) {
        st.push(data);
        return;
    }
    int top = st.top();
    st.pop();
    insert_in_sorted_stack(st, data);
    st.push(top);
};

void sort_stack(stack<int> &st) {
    if (st.empty()) return; 
    int top = st.top();
    st.pop();
    sort_stack(st);
    insert_in_sorted_stack(st, top);
};


int main() {

    stack<int> st;
    st.push(10);
    st.push(0);
    st.push(1);
    st.push(100);
    st.push(11);
    st.push(2);
    st.push(5);

    sort_stack(st);
    while (!st.empty()) {
        int top = st.top();
        st.pop();
        cout << top << " ";
    }
    cout << endl;

    cout << endl << endl << endl;
    return 0;
}
