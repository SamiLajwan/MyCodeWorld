#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        //spaces
        for(int s=1; s<=n-i; s++){
            cout << "_";
        }
        //increasing
        for(int num=1; num<=i; num++){
            cout << num ;
        }
        //decreasing
        for(int num=i-1; num>=1;num--){
            cout << num ;
        }
        cout << endl;
    }
    
    return 0;
}