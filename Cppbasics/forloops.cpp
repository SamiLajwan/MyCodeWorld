#include<iostream>
using namespace std;
int main()
{
    // for(int count=1;count<=10;count++){
    //     cout<<"sami"<<endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<i<<endl;
    //  }
     
    // for( ; ; )
    // cout<<"abcd"<<endl;

    // for (int i = 1; i <=10; i++)
    // {
    //     if(i==5){
    //         break;
    //     }
    //     cout<<i<<" ";
    // }


    // for (int i = 0; i <=5; i++)
    // {
    //     if(i==4){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
    // char i= 65;
    // while (i<=90)
    // {
    //     cout<< i <<endl;
        
    //     i++;
    // }

    //do while loops
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i=i+1;
    // }while(i<=5);

    for(int i=1; i<=3; i+=1){
        for(int j=1; j<=3; j+=1){
            cout<<i<<j<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}