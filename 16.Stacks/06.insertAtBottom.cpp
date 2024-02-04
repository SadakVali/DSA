#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &st, int ele) {
    if (st.size() == 0) {
        st.push(ele);
        return;
    }
    int temp = st.top();
    st.pop();
    insert_at_bottom(st, ele);
    st.push(temp);
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

    insert_at_bottom(st, 80);
    cout << "size of the stack : " << st.size() << endl;

    cout << endl << endl << endl;
    return 0;
}
