#include<iostream>
using namespace std;

void printColSum(int arr[][3], int rowSize, int colSize){
    for(int col=0; col<colSize; col++){
        int sum = 0;
        for(int row=0; row<rowSize; row++){
            sum = sum + arr[row][col];
        }
        cout << "Sum is: " << sum << endl;
    }
}

int main(){
    int arr[3][3] = {
                    {10,20,30},
                    {40,80,80},
                    {20,40,60}
                    };
    int rowSize = 3;
    int colSize = 3;

    printColSum(arr, rowSize, colSize );
}