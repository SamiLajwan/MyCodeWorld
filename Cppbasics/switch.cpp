#include<iostream>
using namespace std;

int main(){
    // char grade;
    // cout<<"entr your grade"<<endl;
    // cin>>grade;

    // switch (grade)
    // {
    // case 'A': cout<<"Your marks will be in a range of 90 to 100"<<endl; 
    //     break;
    // case 'B':cout<<"Your marks will be in a range of 80 to 90"<<endl;
    //     break;
    // case 'C': cout<<"Your marks will be in a range of 70 to 80"<<endl;
    //     break;
    // case 'D':cout<<"Your marks will be in a range of 60 to 70"<<endl;
    //     break;
    
    // default:cout<<"Your marks will be in a range of 0 to 60"<<endl;
    // }

    int day;
   
    cout<<"enter the no. of day"<<endl;
    cin>>day;

    switch(day)
    {
        case 1:
        cout<<"monday"<<endl;
        break;
        case 2:
        cout<<"tuesday"<<endl;
        break;
        case 3:
        cout<<"wednesday"<<endl;
        break;
        case 4:
        cout<<"thursday"<<endl;
        break;
        case 5:
        cout<<"friday"<<endl;
        break;
        default:
        cout<<"weekend"<<endl;
    }

    return 0;
}