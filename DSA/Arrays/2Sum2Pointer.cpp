#include<iostream>
#include<algorithm>
using namespace std;

bool TwoSum2PointerApproach(int arr[], int n, int x){
    int l = 0;
    int h = n-1;

    while(l<h){
        int currsum = arr[l] + arr[h];
        if(currsum == x) 
        return true;

        //if csum is greater than X, it means current pair is too large.
        // we have to move the high index to left to consider smaller pair.
        else if(currsum > x) 
        h--;

        //if csum is lower than X, it means current pair is too small.
        // we have to move the low index to right to consider larger pair.
        else 
        l++;

    }
    return false;
}

int main()
{
    int arr[] = {1,6,4,10,8,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 16;
    sort(arr , arr + n);
    bool ans =  TwoSum2PointerApproach(arr, n, x);
    cout << "Ans is: " << ans << endl;
   
   
}