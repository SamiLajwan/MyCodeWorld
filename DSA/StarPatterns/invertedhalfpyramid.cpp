#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for (int i = 0; i <n; i++)
    {
        /* code */
        for (int j = 0; j<n-i; j++)
        {
            /* code */
            cout<<"* ";
        }
        cout<<endl;
        
    }
    return 0;
}