/*
Stack Memory (SIZE CAN 1 MB, 8 MB. DEPENDS ON SYSTEM ARCHITECTURE)
    .
    .
    .
    .
    .
    .
Heap Memory
Meta data related to programme
Programme Text



IN 32-BIT LINUX SYSTEMS MEMORY CONSTRAINTS OF VARIABLES IN ANY FUNCTION
int, double, char array max size => 10^6
bool array size => 10^7
MEMORY CONSTRAINTS OF GLOBAL VARIABLES
int, double, char array max size => 10^7
bool array size => 10^8
*/

/*
Given Problem 
1 <= L, R <= 10^9
but 
R-L <= 10^6
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
using namespace std;

vector<int> find_primes (int n) {
    vector<int> base_primes;
    if (n <= 1) return base_primes;
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;
    for (int curr_prime=2; curr_prime <= sqrt(n); curr_prime++) {
        if (sieve[curr_prime]) {
            int consonant = curr_prime*curr_prime;
            int curr_prime_double = (curr_prime << 1);
            while (consonant <= n) {
                sieve[consonant] = false;
                if (curr_prime & 1) consonant += curr_prime_double;
                else consonant += curr_prime;
            }
        }
    }
    for (int i=0; i<n+1; i++) {
        if (sieve[i]) base_primes.push_back(i);
    }
    return base_primes;
}

int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int L=0, R=30000;
    // PROCESSING
    // STEP-1 -> Generate List of all Primes responsible for marking seg seive [L, R].
    //           That is Generate List of all primes in the range [0, sqrt(R)].
    vector<int> base_primes = find_primes(sqrt(R));
    for (auto value : base_primes) cout << value << "   ";
    cout << endl;

    // STEP-2 -> mark all the consonants in te segmented seive
    vector<bool> seg_seive(R-L+1, true);
    if (L == 0) seg_seive[0] = seg_seive[1] = false;
    if (L == 1) seg_seive[0] = false;
    for (int prime : base_primes) {
        // first consonant wrt base prime
        int consonant = prime*prime;
        // first multiple of base prime in the segmented seive
        int first_multiple = (L/prime)*prime;
        if (first_multiple < L) first_multiple += prime;
        consonant = max(consonant, first_multiple);
        int prime_double = 2*prime;
        while (consonant <= R) {
            seg_seive[consonant-L] = false;
            if (prime & 1) consonant += prime_double;
            else consonant += prime;
        }
    }

    // STEP-3 -> print all the primes in the given range [L, R]
    int ctr = 0;
    for (int i=0; i<seg_seive.size(); i++) {
        if (seg_seive[i]) {
            cout << i+L << "   ";
            ctr++;
        }
    }
    cout << endl;
    cout << "Total Number of Primes : " << ctr << endl;

    // OUTPUT
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
