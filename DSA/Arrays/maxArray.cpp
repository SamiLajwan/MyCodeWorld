#include<iostream>
#include <climits>
using namespace std;

int findMax(int arr[], int size)
{
   int maxAns = INT_MIN;
   for(int i=0; i<size; i++)
   {
    maxAns = max(maxAns, arr[i]);
   }
   return maxAns; 
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter the number of elements: "<< endl;
    cin >> size;

    for(int i=0; i<size; i++)
    {
        cout<<"Enter the value for index: " << i <<endl;
        cin >> arr[i];

        
    }

cout<< "Max number is: " << findMax(arr, size) << endl;
return 0;
}