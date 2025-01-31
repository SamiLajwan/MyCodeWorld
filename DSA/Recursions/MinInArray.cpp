#include <bits/stdc++.h>
using namespace std;

int MinInArray(int arr[], int size, int index, int &mini){
    // base case
    if(index >= size){
        return mini;
    }

    // recursive case
    // 1 case me khud solve karunga or // processing
    mini = max(mini, arr[index]);

    // 2nd case recursion kardega
    MinInArray(arr, size, index+1, mini);
}

int main() {
    int arr[] = {1, 5, 3, 9, 2, 4};
    int size = 6;
    int index = 0;
    int mini = INT_MAX;
    int minElement = MinInArray(arr, size, index, mini);
    cout << "The minimum element in the array is: " << minElement << endl;
    return 0;
}

