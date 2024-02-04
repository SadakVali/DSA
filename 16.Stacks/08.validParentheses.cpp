#include<bits/stdc++.h>
using namespace std;

bool is_it_valid_parentheses(string &parentheses) {
    stack<int> st;
    for (char ch : parentheses) {
        if ((ch == '(') || (ch == '[') || (ch == '{')) {
            st.push(ch);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((ch == ')') && (top == '('))
                st.pop();
            else if ((ch == ']') && (top == '['))
                st.pop();
            else if ((ch == '}') && (top == '{'))
                st.pop();
            else 
                return false;
        }
    }
    return st.empty() ? true : false;
};


int main() {

    string parentheses = "{({}){[]}[]}";
    cout << "Is it Valid Parentheses? : " << is_it_valid_parentheses(parentheses) << endl;

    cout << endl << endl << endl;
    return 0;
}
