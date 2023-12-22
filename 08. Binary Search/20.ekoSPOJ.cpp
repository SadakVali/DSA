#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_this_possible_sol (
    vector<long long int> &tree_heights, 
    long long int length_of_wood_needed, 
    long long int mid
    ) {
    long long int wood_collected = 0;
    for (long long int i=0; i<tree_heights.size(); i++) {
        if (tree_heights[i] > mid) 
            wood_collected += (tree_heights[i] - mid);
    }
    return (wood_collected >= length_of_wood_needed);
}

long long int find_optimal_saw_blade_height (
    vector<long long int> &tree_heights, 
    long long int length_of_wood_needed
    ) {
    long long int start = 0;
    long long int end = *max_element(tree_heights.begin(), tree_heights.end());
    long long int optimal_saw_blade_height = -1, mid;
    while (start <= end) {
        mid = start + ((end - start) >> 1);
        if (is_this_possible_sol(tree_heights, length_of_wood_needed, mid)) {
            optimal_saw_blade_height = mid;
            start = mid + 1;
        } else 
            end = mid - 1;
    }
    return optimal_saw_blade_height;
}



// ########## https://www.spoj.com/problems/EKO/ ########## //
int main() {

    vector<long long int> tree_heights = {20, 15, 10, 17};
    long long int length_of_wood_needed = 7;
    long long int num_of_trees = 4;

    // vector<long long int> tree_heights;
    // long long int length_of_wood_needed, num_of_trees;
    // cout << "Enter the Total number of trees in the Forest and length of the wood you need respectively : ";
    // cin >> num_of_trees >> length_of_wood_needed;
    // long long int height;
    // while (num_of_trees--) {
    //     cin >> height;
    //     tree_heights.push_back(height);
    // }

    long long int optimal_saw_blade_height = find_optimal_saw_blade_height(
        tree_heights, 
        length_of_wood_needed
    );
    cout << "Optimal Saw Blade height is : " << optimal_saw_blade_height << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
