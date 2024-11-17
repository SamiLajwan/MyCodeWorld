#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findMiniMum2DArray(int arr[][4], int rowSize, int colSize){
    int minValue = INT8_MAX; 

    for(int i=0; i<rowSize; i++)
        for(int j=0; j<colSize; j++)
        {
            
            minValue = min(arr[i][j], minValue);
        
        }
    

    return minValue;
}

int main(){
    int arr[3][4]= {
                    {10,11,12,13},
                    {20,21,22,23},
                    {31,32,44,55}
                    };
                    
    int rowSize = 3;
    int colSize = 4;

    int ans = findMiniMum2DArray(arr, rowSize, colSize);
    cout << "ANS is: " << ans << endl;


}