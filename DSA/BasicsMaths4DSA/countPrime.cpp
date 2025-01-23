#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;

        vector<bool> prime(n, true); // all primes are marked already
        prime[0] = prime[1] = false;
        int primeCount = 0;

        for(int i=2; i<n; i++){
            if(prime[i]){
                primeCount++;

                int j=2*i;
                while(j<n){
                    prime[j] = false;
                    j+=i;
                }
            }
        }
        return primeCount;
    }

    vector<int> generatePrimes(int n) {
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        vector<int> primes;

        for(int i = 2; i < n; i++) {
            if(prime[i]) {
                primes.push_back(i);
                for(int j = 2 * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        return primes;
    }
};
