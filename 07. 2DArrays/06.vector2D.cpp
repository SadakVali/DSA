#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 2D vector declaration
    vector<vector <int>> arr1;
    vector<vector <int>> arr2(6, vector<int>(10, -1));

    // printting the 2D vector
    for (int i=0; i<arr2.size(); i++) {
        for (int j=0; j<arr2[i].size(); j++) {
            cout << arr2[i][j] << "   ";
        }
        cout << endl;
    }

    // populating 2D vector
    vector<int> a{1,2,3};
    vector<int> b{2,3,4,5,6};
    vector<int> c{1,2};
    vector<int> d{3, 5, 6};
    arr1.push_back(a);
    arr1.push_back(b);
    arr1.push_back(c);
    arr1.push_back(d);

    // printting the 2D vector
    for (int i=0; i<arr1.size(); i++) {
        for (int j=0; j<arr1[i].size(); j++) {
            cout << arr1[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    // indexing the 2D vector
    cout << "Indexing arr1[1][3] : " << arr1[1][3] << endl;

    // arr is the 2D vector with 3 rows and 30 columns initialized with value = -8
    int rows = 3;
    int columns = 30;
    vector<vector <int>> arr(rows, vector<int>(columns, -8));

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
