#include<iostream>
using namespace std;

bool FindTarget(int arr[], int size, int target)
{
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] == target)
        {
            return true;

        }
        
    }
    return false;
    
}

int main()
{
    int arr[]={10,20,30,40};
    int size;
    int target = 30;
    bool ans = FindTarget(arr ,size, target) ;
    cout<< "ans : " << ans <<endl;
    return 0;
}