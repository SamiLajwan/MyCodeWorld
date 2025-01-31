#include <bits/stdc++.h>
using namespace std;

int MaxInArray(int arr[], int size, int index, int &maxi){
    // base case
    if(index == size){
        return maxi;
    }

    // recursive case
    // 1 case me khud solve karunga or // processing
    maxi = max(maxi, arr[index]);

    // 2nd case recursion kardega
    MaxInArray(arr, size, index+1, maxi);
}

int main() {
    int arr[] = {1, 5, 3, 9, 2, 4};
    int size = 6;
    int index = 0;
    int maxi = INT_MIN;
    int maxElement = MaxInArray(arr, size, index, maxi);
    cout << "The maximum element in the array is: " << maxElement << endl;
    return 0;
}

