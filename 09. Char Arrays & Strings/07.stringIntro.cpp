#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str1 = "Sadiq Vali";

    cout << "Length -> " << str1.length() << endl;
    cout << "Is it empty? -> " << str1.empty() << endl;

    str1.push_back('@');
    cout << str1 << endl;

    str1.pop_back();
    cout << str1 << endl;

    cout << str1.substr(1, 3) << endl;
    cout << str1 << endl;

    string str2 = "Sadiq Vali";
    string str3 = "sadiq vali";
    string str4 = "Sadiq Vali ";
    cout << "Is it same? -> " << str1.compare(str2) << endl;
    cout << "Is it same? -> " << str1.compare(str3) << endl;
    cout << "Is it same? -> " << str3.compare(str1) << endl;
    cout << "Is it same? -> " << str4.compare(str1) << endl;
    cout << "Is it same? -> " << str1.compare(str4) << endl;

    string sentense = "Hi guyz. How are you doing?";
    string target1 = "are";
    string target2 = "are z";
    cout << sentense.find(target1) << endl;
    cout << sentense.find(target2) << endl;
    if (sentense.find(target2) == string::npos) 
        cout << "Not found" << endl;

    string str = "This is my first message.";
    string word = "second";
    str.replace(11, 5, word);
    cout << str << endl;

    str.erase(11, 7);
    cout << str << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
