#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int index){
    //base case
    if(index == n-1){
        //single element wala array is considered as Sorted
        return true;
    }
    bool currAns = false;
    bool RecursionAns = false;
    // 1 case main
    if(arr[index+1] > arr[index]){
        currAns = true;
    }

    //baaki recursion sambhal lega
    RecursionAns = isSorted(arr, n, index+1);
    return (currAns && RecursionAns);
}

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    bool ans = isSorted(arr, n, index);
    cout << ans << endl;
    return 0;

}