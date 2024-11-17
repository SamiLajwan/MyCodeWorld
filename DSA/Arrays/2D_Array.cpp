#include<iostream>
using namespace std;


int main()
{
    //declaration
    //int arr[4][3];

    //initialize
    int arr[3][3] = {
                    {10,20,100},
                    {30,40,200},
                    {50,60,300}
                    };

    //Second method to initial Array  ->
    //int arr[3][2] = {10,20,30,40,50,60};


    //prnt
    //cout << arr[0][1] << endl;

    //traverse the entire array
    int rowSize = 3;
    int colSize = 3;

    //Row-wise
    // for(int rowIndex=0; rowIndex<rowSize; rowIndex++)
    // {
    //     for(int colIndex =0; colIndex < colSize; colIndex++)
    //     {
    //         cout << arr[rowIndex][colIndex] << " ";
    //     }
    //     cout << endl;
    // }

    //Column-wise
    //Square Matrix
    // for(int rowIndex=0; rowIndex<rowSize; rowIndex++)
    // {
    //     for(int colIndex =0; colIndex < colSize; colIndex++)
    //     {
    //         cout << arr[colIndex][rowIndex] << " ";
    //     }
    //     cout << endl;
    // }

    // column wise
    // for(int col=0; col<colSize; col++)
    // {
    //     for(int row =0; row < rowSize; row++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }


    //Diagonal 
    // for(int row = 0; row < rowSize; row++){
    //     for(int col = 0; col < colSize; col++){
    //         if(row == col){
    //             cout << arr[row][col];
    //         }
    //     }
    //     cout << endl;
    // }

    //Diagonal using single loop
    // for(int i=0; i<rowSize; i++)
    // {
    //     cout<<arr[i][i]<<" " << endl ;
    // }

    //inverse diagnal
    for(int row = 0; row < rowSize; row++){
        for(int col = 3; col>=colSize; col--){
            if(row == col){
                cout << arr[row][col];
            }
        }
        cout << endl; 
    }
    

    
}