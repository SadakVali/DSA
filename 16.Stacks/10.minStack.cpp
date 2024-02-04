#include<bits/stdc++.h>
using namespace std;

class MinStack {
    private:
        vector<pair<int, int>> st;
        int top;
    public:
        MinStack() {};
        void push(int _data) {
            if (st.empty()) {
                pair<int, int> pr = make_pair(_data, _data);
                st.push_back(pr);
            } else {
                pair<int, int> pr;
                pr.first = _data;
                pr.second = min(_data, st.back().second);
                st.push_back(pr);
            }
        };
        void pop() {
            st.pop_back();
        };
        int top() {
            return st.back().first;
        };
        int get_min() {
            return st.back().second;
        };
};


int main() {

    cout << endl << endl << endl;
    return 0;
}
