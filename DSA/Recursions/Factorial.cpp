#include<iostream>
using namespace std;

int getFactorial(int n) {
    //base case - mandatory
    if(n == 0 || n == 1) {
        return 1;
    }
    //recursive call - mandatory
    //fact(n) = n * fact(n-1);
    //recursion -> fact(n-1);
    int recursionKaAns = getFactorial(n-1);
    int finalAns = n * recursionKaAns;
    return finalAns;
    //processing - optional 
}

int main(){
    int n;
    cin >> n;
    cout << "Factorial is:"<< getFactorial(n) << endl;
    return 0;
}