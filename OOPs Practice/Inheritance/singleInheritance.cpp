#include<iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "Animal is created.." << endl;
    }
    void eat(){
        cout << "Animal is eating.." << endl; 
    }
};

class Dog : public Animal{
    public:

        Dog(){
            cout << "Dog is created.." << endl;
        }
        void bark(){
            cout << "Dog is Barking.." << endl;
        }
};

int main(){
    Dog d;
    d.eat(); // inherited
    d.bark();
    return 0;
}