#include<iostream>
#include<algorithm> //uses for sorting function.
using namespace std;

void sortOneZero(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;

    //Counting the 1 & 0 -
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            zeroCount++;
        }
        if(arr[i] == 1)
        {
            oneCount++;
        }
    }

    //Insertion
    //(FILL METHOD ->>)
    //fill(arr, arr+zeroCount, 0);
    //fill(arr+zeroCount, arr+n, 1);
    
    for(int i = 0; i<zeroCount; i++)
    {
        arr[i] = 0;
    }
    for(int i = zeroCount ; i<n; i++)
    {
        arr[i] = 1;
    }
}

int main()
{
    int arr[] = {0,1,1,1,0,0,1};
    int size = 7;

    sortOneZero(arr, size);

    //using sort function
    //sort(arr, arr+size);  --> Method-2 
    
    //printing the array
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}