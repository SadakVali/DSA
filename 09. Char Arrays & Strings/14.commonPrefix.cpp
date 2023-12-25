#include <iostream>
#include <vector>

using namespace std;

string find_prefix (string &first, string &second) {
    int m = first.size(), n = second.size();
    string ans="";
    int i=0;
    while ((i < min(m, n)) && (first[i] == second[i]))
        ans.push_back(first[i++]);
    return ans;
}


string find_common_prefix (vector<string> &strs) {
    string common_prefix = strs[0];
    for (int i=1; i<strs.size(); i++)
        common_prefix = find_prefix(common_prefix, strs[i]);
    return common_prefix;
}


int main () {
    // vector<string> strs = {"flower", "flow", "flight"};
    vector<string> strs = {"", ""};
    cout << "The Common Prefix is : " << find_common_prefix(strs).size() << endl;
    return 0;
}
