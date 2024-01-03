#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

vector<pair<int, string>> int_to_str_map = {
    {1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"}, 
    {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"},
    {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"}, 
    {20, "Twenty"}, {19, "Nineteen"}, {18, "Eighteen"}, {17, "Seventeen"}, 
    {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"}, 
    {12, "Twelve"}, {11, "Eleven"}, {10, "Ten"}, {9, "Nine"}, {8, "Eight"}, 
    {7, "Seven"}, {6, "Six"}, {5, "Five"}, {4, "Four"}, {3, "Three"}, 
    {2, "Two"}, {1, "One"}
};

string convert_int_to_string(int num) {
    if (num == 0) return "Zero";
    for (auto iter : int_to_str_map) {
        if (num >= iter.first) {
            string a = "";
            if (num >= 100) a = convert_int_to_string(num/iter.first) + " ";
            string b = iter.second;
            string c = "";
            num %= iter.first;
            if (num) c = " " + convert_int_to_string(num);
            return a + b + c;
        }
    }
    return "";
}


// https://leetcode.com/problems/integer-to-english-words/description/
// TC ===> O(log10(N)) & SC => O(log10(N))
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int num = 1234567;
    // PROCESSING
    string int_to_string_rep = convert_int_to_string(num);
    // OUTPUT
    cout << "String representation of Integer : " << int_to_string_rep << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
