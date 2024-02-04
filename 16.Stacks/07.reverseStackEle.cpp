#include<bits/stdc++.h>
using namespace std;

void push_ele_to_the_bottom(stack<int> &st, int data) {
    if (st.size() == 0) {
        st.push(data);
        return;
    }
    int temp = st.top();
    st.pop();
    push_ele_to_the_bottom(st, data);
    st.push(temp);
};

void reverse_stack_elements(stack<int> &st) {
    if (st.empty()) return;
    int top = st.top();
    st.pop();
    reverse_stack_elements(st);
    push_ele_to_the_bottom(st, top);
};


int main() {

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    while (!st.empty()) {
        int top = st.top();
        st.pop();
        cout << top << " ";
    }
    cout << endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    reverse_stack_elements(st);
    while (!st.empty()) {
        int top = st.top();
        st.pop();
        cout << top << " ";
    }
    cout << endl;

    cout << endl << endl << endl;
    return 0;
}
