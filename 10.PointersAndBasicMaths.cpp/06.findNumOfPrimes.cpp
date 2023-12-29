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

int eratosthenese_method (int n) {
    if (n <= 1) return 0;
    int prime_count=0, threshold=sqrt(n), consonant, curr_prime_double;
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;
    for (int curr_prime=2; curr_prime<=threshold; curr_prime++) {
        if (sieve[curr_prime]) {
            consonant = curr_prime*curr_prime;
            curr_prime_double = (curr_prime << 1);
            while (consonant <= n) {
                sieve[consonant] = false;
                if (curr_prime & 1) consonant += curr_prime_double;
                else consonant += curr_prime;
            }
        }
    }
    for (int i=0; i<n+1; i++) {
        if (sieve[i]) prime_count++;
    }
    return prime_count;
}



int main () {
    auto start = chrono::high_resolution_clock::now();
    // INPUT
    int prime_count = 0, n = 30000;
    // PROCESSING
    // // M1 -> naive method O(n^2)
    // for (int i=0; i<n; i++) {
    //     if (is_this_prime2(i)) prime_count++;
    // }
    // M2 -> eratosthenese method O(n*lg(lg(n)))
    prime_count = eratosthenese_method(n);
    // OUTPUT
    cout << "Number of Primes between [0, " << n << "] : " << prime_count << endl;
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " milliseconds" << endl;
    cout << endl << endl << endl;
    return 0;
}
