#include<iostream>
#include<vector>

using namespace std;

bool search2DArray(vector<vector<int>> arr, int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr(4, vector<int>(3, 0));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i = 0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }
    
    int target = 0;

    bool ans = search2DArray(arr, target);
    cout << "ans is: " << ans;

}

