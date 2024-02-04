#include<bits/stdc++.h>
using namespace std;


int main() {
    stack<char> st;
    string str = "Sadiq Vali";

    for (auto ch : str) 
        st.push(ch);

    while (!st.empty()) {
        char ch = st.top();
        cout << ch;
        st.pop();
    }
    cout << endl;

    cout << endl << endl << endl;
    return 0;
}
