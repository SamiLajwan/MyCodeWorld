#include<iostream>
using namespace std;

bool search2DArray(int arr[][4], int rowSize, int colSize, int target)
{
    for(int i = 0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4] = {
                    {10,11,12,13},
                    {20,21,22,23},
                    {30,31,32,33}

                    };
    int rowSize = 3;
    int colSize = 4;
    int target = 33;

    bool ans = search2DArray(arr, rowSize, colSize, target);

    cout << "Ans is: " << ans << endl;
}