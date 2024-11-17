#include<iostream>
using namespace std;

void DiagonalSum(int arr[][3], int rowSize, int colSize){
    int sum = 0;
    for(int row = 0; row < rowSize; row++){
        sum = sum + arr[row][row];
    }
    cout << "Sum is: " << sum << endl;
}

//O(n^2) complexity ->>
//  void DiagonalSum(int arr[][3], int rowSize, int colSize){
//     int sum = 0;
//     for(int row=0; row<rowSize; row++){
//         for(int col=0; col<colSize; col++){
//             if(row == col)
//             {
//             sum = sum + arr[row][row];
            
            
//             }
//         }
//     }
//     cout << "Sum is: " << sum << endl; 
// }

int main(){
    int arr[3][3] = {
                    {10,20,30},
                    {40,80,80},
                    {20,40,60}
                    };
    int rowSize = 3;
    int colSize = 3;

    DiagonalSum(arr, rowSize, colSize );
}