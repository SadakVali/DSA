#include <iostream>
using namespace std;

int main() {

    int digits[] = {8, 2, 3, 7};
    int ans = 0;

for (int i = 0; i < 4; i++) {
    ans = (ans*10) + digits[i];
}
    cout << ans << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
