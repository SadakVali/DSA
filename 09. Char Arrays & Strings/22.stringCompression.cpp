#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int compress_the_string (vector<char> &s) {
//     int index=0, count=1, start;
//     char prev = s[0];

//     for (int i=1; i<s.size(); i++) {
//         if (s[i] == prev)
//             count++;
//         else {
//             s[index++] = prev;
//             if (count > 1) {
//                 start = index;
//                 while (count) {
//                     s[index++] = (count % 10) + '0';
//                     count /= 10;
//                 }
//                 reverse(s.begin()+start, s.begin()+index);
//                 count = 1;
//             }
//             prev = s[i];
//         }
//     }

//     s[index++] = prev;
//     if (count > 1) {
//         start = index;
//         while (count) {
//             s[index++] = (count % 10) + '0';
//             count /= 10;
//         }
//         reverse(s.begin()+start, s.begin()+index);
//     }

//     return index;
// }

int compress_the_string (vector<char> &str) {
    int index=0, prev=0, next=1, n=str.size(), count, start;
    while (next <= n) {
        if ((next == n) || (str[next] != str[prev])) {
            count = next-prev;
            str[index++] = str[prev];
            if (count > 1) {
                start = index;
                while (count) {
                    str[index++] = (count % 10) + '0';
                    count /= 10;
                }
                count = 1;
                reverse(str.begin()+start, str.begin()+index);
            }
            prev = next;
        }
        next++;
    }
    return index;
}


int main () {
    vector<char> str = {'a','a','b','b','c','c','c'};
    int ans = compress_the_string(str);
    cout << ans << endl;
    for (int i=0; i<ans; i++)
        cout << str[i];
    cout << endl;
    cout << endl;
    return 0;
}
