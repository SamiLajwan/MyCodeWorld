// Given two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any ” / “ and ” % “ operators

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5.

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333… which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10/-2 = -5

#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor){
        int s = 0;
        int e = dividend;
        int mid = s + ((e-s)>>1);
        int ans = -1;

        while(s<=e){
            if((divisor * mid) == dividend){
                return mid;
            }
            
            if((divisor * mid) < dividend){
                //Store and compute.
                ans = mid;
                s = mid + 1;
            
            }

            else{
                e = mid - 1;
            }
            mid = s + ((e-s) >> 1);
        }
        return ans;
    }

int main(){
    int dividend = 10;
    int divisor = -3;

    int ans = getQuotient(abs(dividend), abs(divisor));

    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        ans *= -1;;
    
    cout << "Final Ans: " << ans << endl;
    return 0;
}