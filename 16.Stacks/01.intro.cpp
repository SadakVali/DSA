#include<bits/stdc++.h>
using namespace std;

/*
STACK ::: LIFO (Last In First Out)
1. Examples of LIFO ::: 
    1. example ctrl + z in computer.
    2. Food plates on the wedding functions.
    3. Bullets from the Gun Magezine.
2. operations possible with stack
    1. stack.push(50)
    2. stack.pop()
    3. stack.top()
    4. stack.empty() ===> true / false
    5. stack.size()
*/

int main() {

    stack<int> st; // creation
    st.push(23); // insertion
    st.push(33); 
    st.push(43); 
    cout << "Top element in the stack : " << st.top() << endl;
    cout << "Is stack empty : " << st.empty() << endl;
    cout << "Size of the stack : " << st.size() << endl;
    st.pop(); // popped element won't be returned
    cout << "Size of the stack after popping : " << st.size() << endl;

    cout << endl << endl << endl;
    return 0;
}
