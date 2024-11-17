#include<iostream>
using namespace std;
 int main()
 {
        //hollow square
    int n;
    cout << "Enter length of side of square" << endl;
    cin >> n;

    //outer -> rows
    for(int row=0; row<n; row++) {
        //inner -> cols
        for(int col=0; col<n; col++) {
            if(row == 0 || row == n-1 || col == 0 || col == n-1 ) 
                cout << "* ";
            else
                cout << "  ";
        }
        //ye main bhul jata hu
        cout << endl;
    }
    return 0;
 }
