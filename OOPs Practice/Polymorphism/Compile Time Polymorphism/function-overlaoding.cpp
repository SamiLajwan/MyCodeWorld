#include<iostream>
using namespace std;

class Calculator{
public:

    int add(int a, int b){
        return a+b;
    }

    double add(double a, double b){
        return a+b;
    }
};

int main(){
    Calculator c;

    cout << c.add(1,2) << endl;
    cout << c.add(1.1, 5.9) << endl;

    return 0;
}