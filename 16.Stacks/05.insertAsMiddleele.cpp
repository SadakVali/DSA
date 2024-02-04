#include<bits/stdc++.h>
using namespace std;

void print_middle_ele(stack<int> &st, int &size) {
    if (size == 0) return;
    if (((size/2)+1) == st.size()) {
        cout << "Middle ele : " << st.top() << endl;
        return;
    }
    int temp = st.top();
    st.pop();
    print_middle_ele(st, size);
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

    int size = st.size();
    print_middle_ele(st, size);
    cout << "size of the stack : " << st.size() << endl;

    cout << endl << endl << endl;
    return 0;
}
