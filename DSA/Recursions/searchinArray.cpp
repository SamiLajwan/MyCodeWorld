#include<iostream>
using namespace std;

bool searchinArray(int arr[], int size, int index, int target){
    // base case-> if index is equal to size
    if(index >= size){
        return false;

    }
    // base case 2-> if target is found
    if(arr[index] == target){
        return true;
    }

    // recursive case
    return searchinArray(arr, size, index+1, target);
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    int target = 50;
    int index = 0;
    
    cout << searchinArray(arr, size, index, target) << endl;
    return 0;
}