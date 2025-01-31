#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){
    //base case
    if(index == size){
        return;
    }
    //recursive case
    //1 case me khud solve karunga 
    cout << arr[index] << " ";

    //2nd case recursion kardega
    printArray(arr, size, index+1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int index = 0;
    printArray(arr, size, index);
    return 0;
}