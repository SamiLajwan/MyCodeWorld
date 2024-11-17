#include<iostream>
using namespace std;

void ExtremePrint(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while(i<=j)
    {
        if(i == j) {
            cout << arr[i] << " ";
            break;
        }
        else
        {
        cout << arr[i] << " ";
        i++;
        cout << arr[j] << " ";
        j--;
        }
    }

}

int main()
{
    int arr[]= {10,20,30,40,50,60,70};
    int n = 7;
    
    ExtremePrint(arr, n);
    return 0;
}