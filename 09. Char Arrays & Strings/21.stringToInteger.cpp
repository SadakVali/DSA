#include <iostream>
using namespace std;

int string_to_integer1 (string &s) {
    return atoi(s.c_str());
}

int string_to_integer2 (string &s) {
    int num=0, i=0, sign=1, threshold=INT32_MAX/10;
    while (s[i] == ' ') 
        i++;

    if ((i < s.size()) && ((s[i] == '-') || (s[i] == '+'))) {
        sign = s[i] == '-' ? -1 : 1;
        i++;
    }

    while ((i < s.size()) && isdigit(s[i])) {
        if ((num > threshold) || ((num == threshold) && s[i] > '7'))
            return sign==-1 ? INT32_MIN : INT32_MAX;
        num = (num*10)+(s[i]-'0');
        i++;
    }

    return num*sign;
}


int main () {
    string s = "     +0123456789Sadiq143";
    // cout << string_to_integer1(s) << endl;
    cout << string_to_integer2(s) << endl;
    cout << endl;
    return 0;
}
