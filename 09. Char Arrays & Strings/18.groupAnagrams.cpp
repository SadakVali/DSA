// https://leetcode.com/problems/group-anagrams/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// TC => O(n*k*lg(k)); SC => O(n*k)
// where n = strs.size(); k = max size of word in strs
vector<vector<string>> group_anagrams1 (vector<string> &strs) {
    vector<vector<string>> ans;
    map<string, vector<string>> mp;
    for (auto &str: strs) {
        string temp_str = str;
        sort(temp_str.begin(), temp_str.end());
        mp[temp_str].push_back(str);
    }
    for (auto iter=mp.begin(); iter!=mp.end(); iter++)
        ans.push_back(iter->second);
    return ans;
}

// TC => O(n*k); SC => O(n*k)
array<int, 256> my_hash_fnc (string &word) {
    array<int, 256> hash = {0};
    for (auto &character : word)
        hash[character]++;
    return hash;
}

vector<vector<string>> group_anagrams2 (vector<string> &strs) {
    vector<vector<string>> ans;
    map<array<int, 256>, vector<string>> mp;
    for (auto &word : strs)
        mp[my_hash_fnc(word)].push_back(word);
    for (auto iter=mp.begin(); iter!=mp.end(); iter++)
        ans.push_back(iter->second);
    return ans;
}


int main () {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    // vector<vector<string>> grouped_anagrams = group_anagrams1(strs);
    vector<vector<string>> grouped_anagrams = group_anagrams2(strs);
    cout << '[';
    for (auto &group: grouped_anagrams) {
        cout << '[';
        for (auto &word : group) 
            cout << word << ',';
        cout << "], ";
    }
    cout << ']' << endl;
    cout << endl; 
    return 0;
}
