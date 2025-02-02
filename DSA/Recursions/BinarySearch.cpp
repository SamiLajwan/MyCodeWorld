#include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int arr[], int n, int s, int e, int target)
{
    // base case
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    // 1 case main
    if (arr[mid] == target)
    {
        return mid;
    }
    //baaki recursion
    if (target > arr[mid])
        return binarySearchRecursive(arr, n, mid + 1, e, target);
    else
        return binarySearchRecursive(arr, n, s, mid - 1, target);
}

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e = n-1;
    int target = 30;

    cout << "Elemnt Index: " <<  binarySearchRecursive(arr,n,s,e,target) << endl;;
    return 0;
}