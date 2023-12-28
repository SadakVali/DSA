#include <iostream>
#include <cmath>
#include <vector>
#include <chrono>
using namespace std;

bool is_this_prime1 (int &num) {
    if (num <= 1) return false;
    for (int i=2; i<num; i++) {
        if ((num % i) == 0) return false;
    }
    return true;
}

bool is_this_prime2 (int &num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if ((num & 1) == 0) return false;
    for (int i=3; i<=sqrt(num); i += 2) {
        if ((num % i) == 0) return false;
    }
    return true;
}


int main () {
    auto start = chrono::high_resolution_clock::now();

    int prime_count = 0, n = 30000;

    // // NON-ERATOSTHENESE METHOD O(n^2)
    // for (int i=0; i<n; i++) {
    //     if (is_this_prime2(i)) prime_count++;
    // }

    // ERATOSTHENESE METHOD O(n*lg(lg(n)))
    if (n <= 1) return 0;
    int threshold = sqrt(n), consonant;
    vector<bool> sieve(n, true);
    sieve[0] = sieve[1] = false;
    for (int curr_prime=2; curr_prime<n; curr_prime++) {
        if (sieve[curr_prime]) {
            prime_count++;
            if (curr_prime <= threshold) {
                consonant = curr_prime*curr_prime;
                while (consonant < n) {
                    sieve[consonant] = false;
                    consonant += curr_prime;
                }
            }
        }
    }
    cout << "Number of Primes between [0, " << n << ") : " << prime_count << endl;

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " milli seconds" << endl;
    cout << endl << endl << endl;
    return 0;
}
