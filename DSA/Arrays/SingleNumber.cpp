#include<iostream>
using namespace std;

int findUniqueNumber(int arr[], int n)
{
    int ans = 0;

    //to find the finl answer, we need to XOR all the numbers in the ARRAY

    for(int i=0; i<n ; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
   int arr[] = {1, 2, 0, 2, 1};
   int size = 5;
   int ans = findUniqueNumber(arr, size);
   cout << "Unique Number is: " << ans << endl;
   return 0;
}