#include<iostream>
using namespace std;

int findLastOccurance(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target){
            //ans found -> but may or may not be last ocurnance
            //use the concept of store and compute
            ansIndex = mid;
            //kyuki last occurance ki baat ho rhi h
            //right me jao
            s = mid + 1;
        
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
    int target = 30;
    // -1 means target not found
    int ansIndex = -1;

    //binary search
    findLastOccurance( arr , n, target,ansIndex);
    cout << "Last Occ Index: " << ansIndex << endl;
    return 0;
}  