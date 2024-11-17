#include<iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<a<<endl;
    cout<<(++a)<<endl;
    //a ki value 6 ho chuki h
    cout<<(a++)<<endl;
    //print krne pr 6 hi ayga, but a ki value 7 ho chuki hain
    cout<<a<<endl;
    // a ki value 7 hogyi!!
    cout<<(--a)<<endl;
    //a ki value 6 ban chuki hain
    cout<<(a--)<<endl;
    //a ki value 5 ban chuki h prr print 6 hi hoga
    cout<<a<<endl;
    //yha a ki value 5 ajaygi!!
    return 0;
}