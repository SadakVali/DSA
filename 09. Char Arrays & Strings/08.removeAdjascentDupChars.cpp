#include <iostream>
#include <string.h>
using namespace std;

string remove_adjascent_dup_chars (string str) {
    string ans;
    for (int i=0; i<str.length(); i++) {
        if (ans.length() == 0) 
            ans.push_back(str[i]);
        else if (ans[ans.length()-1] != str[i])
            ans.push_back(str[i]);
        else
            ans.pop_back();
    }
    return ans;
}


int main() {

    string str = "azxxzy";
    string ans = remove_adjascent_dup_chars(str);
    cout << ans << endl;
    
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
