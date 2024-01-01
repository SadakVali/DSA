#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int factorial (int n) {
    return (n == 1) ? 1 : n*factorial(n-1);
}

void print_counting (int n) {
    if (n == 0) return;
    cout << n << " "; // from 10 to 1
    print_counting(n-1);
    cout << n << " "; // from 1 to 10
}

int n_th_term_in_fibinacci (int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return n_th_term_in_fibinacci(n-1) + n_th_term_in_fibinacci(n-2);
}

int num_of_ways_to_climb_stair (int n) {
    if ((n == 0) || (n == 1)) return 1;
    return num_of_ways_to_climb_stair(n-1)+num_of_ways_to_climb_stair(n-2);
}

void print_array_recur1 (vector<int> &arr, int index) {
    if (index != arr.size()) {
        cout << arr[index] << " "; // forward
        print_array_recur1(arr, index+1);
        cout << arr[index] << " "; // backward
    }
}

void print_array_recur2 (vector<int> &arr, int index) {
    if (index == arr.size()) return;
    cout << arr[index] << " "; // forward
    print_array_recur2(arr, index+1);
    cout << arr[index] << " "; // backward
}

void print_array_recur3 (int *ptr, int size) {
    if (size == 0) return;
    cout << ptr[0] << " "; // forward
    print_array_recur3(ptr+1, size-1);
    cout << ptr[0] << " "; // backward
}

void print_array_recur4 (int arr[], int n) {
    if (n == 0) return;
    cout << arr[0] << " "; // Forward
    print_array_recur4(arr+1, n-1);
    cout << arr[0] << " "; // Backward
}

void find_max_ele (vector<int> &arr, int &max_ele, int index) {
    if (index >= arr.size()) return;
    if (arr[index] > max_ele) max_ele = arr[index];
    find_max_ele(arr, max_ele, index+1);
}

void find_min_ele (vector<int> &arr, int &min_ele, int index) {
    if (index >= arr.size()) return;
    if (arr[index] < min_ele) min_ele = arr[index];
    find_min_ele(arr, min_ele, index+1);
}

bool is_char_exists (string &name, char &key, int &index) {
    if (index >= name.size()) return false;
    if (key == name[index]) return true;
    return is_char_exists(name, key, ++index);
}

int find_key_index (string &name, char &key, int &index) {
    if (index >= name.size()) return -1;
    if (key == name[index]) return index;
    return find_key_index(name, key, ++index);
}

void find_all_ocurances_of_key (string &name, char &key, int &index, vector<int> &key_occur_ids) {
    if (index == name.size()) return;
    if (name[index] == key) key_occur_ids.push_back(index);
    find_all_ocurances_of_key(name, key, ++index, key_occur_ids);
}

void count_num_of_ocuurances (string &name, char &key, int &count, int &index) {
    if (index == name.size()) return;
    if (name[index] == key) count++;
    count_num_of_ocuurances(name, key, count, ++index);
}

void print_all_the_digits (int num) {
    if (num == 0) return;
    print_all_the_digits(num/10);
    cout << num % 10 << " ";
}

bool is_array_sorted (vector<int> &arr, int &index) {
    if (index == arr.size()-1) return true;
    if (arr[index+1] < arr[index]) return false;
    is_array_sorted(arr, ++index);
}

void print_all_sub_sequences (string &str, string output, int index) {
    if (index == str.size()) {
        cout << output << 1 << endl;
        return;
    }
    print_all_sub_sequences(str, output, index+1);
    output.push_back(str[index++]);
    print_all_sub_sequences(str, output, index);
}

int binary_search (vector<int> &arr, int &target, int start, int end) {
    if (start > end) return -1;
    int mid = start + ((end - start) >> 1);
    if (arr[mid] == target) return mid;
    return target < arr[mid] ? binary_search(arr, target, start, mid-1) : binary_search(arr, target, mid+1, end);
}


int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // // 1. FACTORIAL
    // int n = 15;
    // cout << "Factorial of " << n << " is : " << factorial(n) << endl;

    // // 2. PRINT COUNTING
    // int n = 10;
    // print_counting(n);
    // cout << endl;

    // // 3. FIBINACCI SERIECE
    // int n = 4;
    // cout << "Nth term in Fibinacci Series : " << n_th_term_in_fibinacci(n) << endl;

    // // 4. POSSIBLE NUM OF WAYS TO CLIMB STAIRS
    // int n = 3;
    // int ans = num_of_ways_to_climb_stair(n);
    // cout << "The Number of ways to climb a " << n << " number of stairs is : " << ans << endl;

    // // 5. PRINT ARRAY RECURSIVELY
    // // vector<int> arr = {10, 20, 30, 40, 50};
    // // print_array_recur1(arr, 0);
    // // print_array_recur2(arr, 0);
    // // print_array_recur3(&arr[0], arr.size());
    // int arr[] = {10, 20, 30, 40, 50};
    // print_array_recur4(arr, 5);
    // cout << endl;

    // // 6. FIND MAX, MIN ELEMENTS
    // vector<int> arr = {3,4,56,7,98,0,43};
    // int max_ele = INT32_MIN;
    // int min_ele = INT32_MAX;
    // find_max_ele(arr, max_ele, 0);
    // find_min_ele(arr, min_ele, 0);
    // cout << "Max Element in the Array is : " << max_ele << endl;
    // cout << "Min Element in the Array is : " << min_ele << endl;

    // // 7. FIND A CHAR IN THE STRING
    // string name = "Sadiq Vali";
    // char key = 'z';
    // int index = 0;
    // cout << "Presence of Character in teh String : " << is_char_exists(name, key, index) << endl;

    // // 8. FIND A CHAR INDEX IN THE STRING
    // string name = "Sadiq Vali";
    // char key = 'V';
    // int index = 0;
    // cout << "Presence of Character in teh String : " << find_key_index(name, key, index) << endl;

    // // 9. FIND ALL OCCURANCES OF A KEY
    // string name = "Sadiq Vali";
    // char key = 'a';
    // vector<int> key_occur_ids;
    // int index = 0;
    // find_all_ocurances_of_key(name, key, index, key_occur_ids);
    // for (auto value : key_occur_ids) 
    //     cout << value << " ";
    // cout << endl;

    // // 10. COUNT NUMBER OF TIMES A KEY REPEATED IN THE STRING
    // string name = "Sadiq Vali";
    // char key = ' ';
    // int index = 0, count = 0;
    // count_num_of_ocuurances(name, key, count, index);
    // cout << "Number of ocuurances of key : " << count << endl;

    // // 11. PRINT ALL THE DIGITS OF AN INTEGER
    // int num = 5678;
    // print_all_the_digits(num);
    // cout << endl;

    // // 12. CHECK ARRAY IS SORTED OR NOT
    // vector<int> arr = {43, 43, 43, 44};
    // int index = 0;
    // cout << "Is Array Sorted ? : " << is_array_sorted(arr, index) << endl;

    // // 13. BINARY SEARCH
    // vector<int> arr = {10, 20, 30, 50, 60, 70};
    // int target=50; 
    // int start=0; 
    // int end=arr.size()-1;
    // cout << "The index of the target in the Array is : " << binary_search(arr, target, start, end) << endl;

    // 14. PRINT ALL SUB SEQUENCES
    string str = "abcd";
    string output = "";
    int index = 0;
    print_all_sub_sequences(str, output, index);

    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
