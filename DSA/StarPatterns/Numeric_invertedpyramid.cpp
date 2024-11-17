#include<iostream>
using namespace std;



int main() {

    //half pyramid
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    //inverted numeric half pyramid 

    for(int row=0; row<n; row++) {
        for(int col=0; col< n-row; col++) {
            cout << (col+1) <<" ";
        }
        cout << endl;
    }
return 0;
}