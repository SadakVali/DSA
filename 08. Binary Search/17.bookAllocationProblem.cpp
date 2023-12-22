#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool is_possible_solution (vector<int> &pages_in_each_book, int tot_num_of_students, int mid) {
    int page_count_of_curr_stu = 0;
    int curr_student = 1;
    for (int i=0; i<pages_in_each_book.size(); i++) {
        if (pages_in_each_book[i] > mid) return false;
        if (page_count_of_curr_stu + pages_in_each_book[i] > mid) {
            if (++curr_student > tot_num_of_students) return false;
            page_count_of_curr_stu = pages_in_each_book[i];
        } else 
            page_count_of_curr_stu += pages_in_each_book[i];
    }
    return true;
}

int get_minimum_pages (vector<int> &pages_in_each_book, int tot_num_of_students) {
    int start = 0;
    int end = accumulate(pages_in_each_book.begin(), pages_in_each_book.end(), 0); // cout << end << endl;
    int minimum_possible_pages, mid;
    while (start <= end) {
        mid = start + ((end - start) >> 1); // start+((end-start)/2); // 
        if (is_possible_solution(pages_in_each_book, tot_num_of_students, mid)) {
            minimum_possible_pages = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return minimum_possible_pages;
}

int main() {
    vector<int> pages_in_each_book = {12, 34, 67, 90};
    int tot_num_of_students = 2;

    int minimum_possible_pages = get_minimum_pages(pages_in_each_book, tot_num_of_students);
    cout << minimum_possible_pages << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
