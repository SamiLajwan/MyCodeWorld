#include<iostream>
using namespace std;

void CountingNum(int n){
    // base case 
    if(n == 0){
        return ;

    }

    // processing
    cout << n << " ";

    // recursive call
    CountingNum(n-1);
}

int main(){
    int n;
    cin >> n;
    CountingNum(n);
    return 0;

}