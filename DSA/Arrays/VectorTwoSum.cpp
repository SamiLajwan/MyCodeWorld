#include<iostream>
using namespace std;

pair<int, int> CheckTwoSum(int arr[], int n, int target)
{
    //assuming (-1,-1) as no answer found
    pair<int,int> ans = make_pair(-1,-1);
    //check all pairs
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            
            if(arr[i] + arr[j] == target)
            //found a pair that sums target

            {
               ans.first = arr[i];
               ans.second = arr[j];
               return ans;
            }
        }
    }
    //agar aap yha tak phuch gye
    //iska matlab, koi bhi pair target ke equal nhi mila
    //iska matlab return false karo
    return ans;; 
}

int main()
{
    int arr[]={10,5,20,15,30};
    int size = 5;
    int target = 35;
    pair<int,int> ans = CheckTwoSum(arr, size, target);
    if(ans.first == -1 && ans.second == -1)
    {
        cout<< "Pair not found" << endl;
    }
    else
    cout<<"Pair Found: " << "("<< ans.first << ", " << ans.second << ")" << endl;
    
    return 0;
}