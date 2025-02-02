#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void PrintDigits(int n){
    //base case
    if(n==0){
        return ;

    }
    //recursive call
    int newNum = n/10;
    PrintDigits(newNum);

    int digits = n % 10;
    cout << digits << " ";
}

int main(){
    int n = 2048;
    PrintDigits(n);
    return 0;
}