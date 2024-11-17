#include<iostream>
#include<cmath>
using namespace std;
// int decimalToBinaryMethod1(int n){
//     //Devision method.
//     int binaryno = 0;
//     int i = 0;
//     while (n>0)
//     {
//         /* code */
//         int bit = n % 2;
//         binaryno = bit*pow(10, i++) + binaryno;
//         n = n/2;
//     }
//     return binaryno;


int decimalToBinaryMethod2(int n){
    //Devision method.
    int binaryno = 0;
    int i = 0;
    while (n>0)
    {
        /* code */
        int bit = (n & 1);
        binaryno = bit*pow(10, i++) + binaryno;
        n = n>>1;
    }
    return binaryno;
}

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int binary = decimalToBinaryMethod2(n);
    cout<<binary<<endl;
}