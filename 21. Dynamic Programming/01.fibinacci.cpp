/*
1. Prerequisites of DP is Recursion. here we learn from our past and 
don't repeate the same work that has done in the past, by storing the 
result of that work.
2. We can solve DP problems in stages 
    1. Top Down Approach (Recursion + Memoisation)
    2. Bottom Up Approach (Tabulation Method)
    3. Space Optimisation if possible
3. When to use/apply DP?
    1. Over Lapping Sub Problem (solving same thing again and again)
    2. Optimal Sub-Structures (optimal solution of bigger problem can 
        be calculated by optimal solution of smaller problems, 
        that is recursion)
4. Steps in the Top Down Approach 
    1. Write down the Recursive solition
    2. Use Momoisation to store the Answers of each recursive sub problem
        1. create dp array ===> vector<int> dp(n+1, -1)
        2. store result of recursive sub problem in the dp array
        3. write a condition just after the base case. "If the sub problem 
            is already has a result in the dp array return the result 
            without another making making recursive call"
*/

#include<bits/stdc++.h>
using namespace std;

// TC ===> O(n^2) & SC ===> O(n)
int recursive_fibinacci(int n) {
    if ((n == 0) || (n == 1)) 
        return n;
    return recursive_fibinacci(n-1) + recursive_fibinacci(n-2);
};

// TC ===> O(n) & SC ===> O(n)
// RECURSION + MEMOISATION
int top_down_fibinacci(int n, vector<int> &dp) {
    if ((n == 0) || (n == 1)) 
        return n;
    // step 3 : if the sub problem is already calculated return the result 
    // from dp array
    if (dp[n] != -1) 
        return dp[n];
    // step 2 : stote the answer in the dp array
    dp[n] = top_down_fibinacci(n-1, dp) + top_down_fibinacci(n-2, dp);
    return dp[n];
};

// TC ===> O(n) & SC ===> O(n)
int bottom_up_fibinacci(int &n) {
    if (n == 1) return n; // handling edge case
    vector<int> dp(n+1, -1);  // step 1 : create dp array
    dp[0] = 0;                // step 2 : handle base case
    dp[1] = 1;      
    for (int i=2; i<=n; ++i)  // step 3 : handle sub problems
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
};

// TC ===> O(n) & SC ===> O(1) 
int space_optimised_bottom_up_fibinacci(int &n) {
    if ((n == 0) || (n == 1)) 
        return n; 
    int prev1 = 0, prev2 = 1, curr;
    for (int i=2; i<=n; ++i) { 
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return curr;
};


// https://leetcode.com/problems/fibonacci-number/description/
int main() {

    int n = 6;

    // // TOP DOWN APPROACH
    // vector<int> dp(n+1, -1); // step 1 : create dp array
    // int ans = top_down_fibinacci(n, dp);

    // BOTTOM UP APPROACH
    int ans = space_optimised_bottom_up_fibinacci(n);

    cout << "n_th Fibinacci value is : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
