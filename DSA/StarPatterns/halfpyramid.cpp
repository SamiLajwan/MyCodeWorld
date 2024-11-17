#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    // for (int i = 0; i <n; i++)
    // {
    //     /* code */
    //     for (int j = 0; j<i+1; j++)
    //     {
    //         /* code */
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }

    //numeric half pyramid -->>

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j<i+1; j++)
        {
            /* code */
            cout<<j+1; // column me 11 ya 222 ya 333 aytga
        }
        cout<<endl;
        
    }
    return 0;
}