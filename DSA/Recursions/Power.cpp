#include<iostream>
using namespace std;

int Power(int x, int n){
    //base case
    if(n == 0){
        return 1;

    }

    // recursive call
    
    int finalAns = x * Power(x, n-1);
    return finalAns;
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << Power(x, n);
    return 0;
}