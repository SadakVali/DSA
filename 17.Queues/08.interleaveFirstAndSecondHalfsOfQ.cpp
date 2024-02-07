#include<bits/stdc++.h>
using namespace std;

// TC ===> O(n) & SC ===> O(n)
void interleave_first_second_halfs(queue<int> &right) {
    int half = right.size() >> 1;
    queue<int> left;
    while (half--) {
        left.push(right.front());
        right.pop();
    }
    while (!left.empty()) {
        right.push(left.front());
        right.push(right.front());
        left.pop();
        right.pop();
    }
    if (right.size() & 1) {
        right.push(right.front());
        right.pop();
    }
};


int main() {

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    // q.push(90);

    interleave_first_second_halfs(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl << endl << endl;
    return 0;
}
