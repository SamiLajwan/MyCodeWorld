#include<iostream>
#include<vector>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false; // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= n; i++) { // Optimization: Loop until sqrt(n)
        if (sieve[i]) {
            // Mark multiples of i as false, starting from i*i
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
    return sieve;
}

int main() {
    int n = 25;
    vector<bool> result = sieve(n);

    // Output the prime numbers
    for (int i = 0; i <= n; i++) {
        if (result[i]) {
            cout << i << " ";
        }
    }
    return 0;
}
