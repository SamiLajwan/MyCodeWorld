// sieve of eratosthenes Theorem for count prime

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
};