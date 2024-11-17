#include<iostream>
#include<algorithm>
using namespace std;

bool TwoSum2PointerApproach(int arr[], int n, int x){
    int l = 0;
    int h = n-1;

    while(l<h){
        int csum = arr[l] + arr[h];
        if(csum == x) 
        return true;

        //if csum is grrater than X, it means current pair is too larger.
        // we have to mve the high index to right to consider smaller pair.
        else if(csum > x) 
        h--;

        //if csum is lower than X, it means current pair is too smaller.
        // we have to mve the low index to right to consider larger pair.
        else l++;

    }
    return false;
}

int main()
{
    int arr[] = {1,6,4,10,8,45};
    int n = 6;
    int x = 16;
    sort(arr , arr + n);
    bool ans =  TwoSum2PointerApproach(arr, n, x);
    cout << "Ans is: " << ans << endl;
   
   
}