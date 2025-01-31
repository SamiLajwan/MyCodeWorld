#include<bits/stdc++.h>
using namespace std;

void printAllOdds(int arr[], int n, int index){
    //base case
    if(index == n){
        return;
    }

    //1 case me
    if(arr[index]&1){
        cout << arr[index] << " ";
    }

    //baaki recursion
    printAllOdds(arr, n, index+1);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int index = 0;
    printAllOdds(arr, n, index);
    return 0;
}