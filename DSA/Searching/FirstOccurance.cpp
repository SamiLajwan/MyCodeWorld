#include<iostream>
using namespace std;

int findFirstOccurance(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target){
            //ans found -> may or may not be first ocurnance
            //store and compute
            ansIndex = mid;
            //kyuki first occurance ki baat ho rhi h
            //left me jao
            e = mid -1;
        
        }
        if(target > arr[mid]){
            s = mid + 1;
        }
        if(target < arr[mid]){
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]= {20,20,20,20,20,20,20,30,40,50,60};
    int n = 11;
    int target = 20;
    // -1 means target not found
    int ansIndex = -1;

    //binary search
    findFirstOccurance( arr , n, target,ansIndex);
    cout << "First Occ Index: " << ansIndex << endl;
    return 0;
}  