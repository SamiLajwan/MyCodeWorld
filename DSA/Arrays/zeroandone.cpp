#include<iostream>
#include <climits>
using namespace std;

int ZeroANdOne(int arr[], int size)
{
    int zerocount = 0;
    int onecount = 0;

for(int i = 0; i < size; i++)
{
    if(arr[i] == 0)
    {
        zerocount++;   
    }
    if(arr[i] == 1)
    {
        onecount++;
    }
}
cout <<"Total number of Zeroes: " << zerocount << endl;
cout <<"Total number of Ones: " << onecount << endl;
}

int main()
{
    int arr[100];
    int size;

    cout << "Enter number of elements: " << endl;
    cin >> size;

    for(int i = 0; i<size; i++)
    {
    cout << "Enter the number of index: " << i << endl;
    cin >> arr[i];
    }
    ZeroANdOne(arr, size);
}