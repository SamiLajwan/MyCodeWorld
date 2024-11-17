#include<iostream>
using namespace std;

bool CheckTwoSum(int arr[], int n, int target)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            //found a pair that sums target
            if(arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    //agar aap yha tak phuch gye
    //iska matlab, koi bhi pair target ke equal nhi mila
    //iska matlab return false karo
    return false; 
}

int main()
{
    int arr[]={10,5,20,15,30};
    int size = 5;
    int target = 35;
    bool ans = CheckTwoSum(arr, size, target);

    if(ans==true)
    {
        cout<<"pair found" << endl;
    }
    else
        cout<< " pair not found." << endl;
    
    return 0;
}