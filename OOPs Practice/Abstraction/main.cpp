#include<iostream>
using namespace std;

// ABSTRACT CLASSS {Interface Like}
class Bird{
public:
    //Pure Virtual Function -> abstraction
    virtual void eat() = 0;
    virtual void fly() = 0;

    //virtual Destructor{Important in Abstraction}
    virtual ~Bird(){
        cout << "Bird Destructor called.." << endl;
    }
};

//Derived Classes
class Sparrow : public Bird{
public: 
    void eat() override{
        cout << "Sparrow is eating grains" << endl;
    }
    void fly() override{
        cout << "Sparrow is flying" << endl;
    }

    ~Sparrow(){}
};

//Derived Class 2
class Eagle : public Bird{
public:
    void eat() override{
        cout << "Eagle is eating meat" << endl;
    }

    void fly() override{
        cout << "Eagle is flying High" << endl;
    }

    ~Eagle(){}
};      

//High Level function depends on abstraction
void birdActivity(Bird* bird){
    bird->eat();
    bird->fly();
}

int main(){

    // Bird b;   
    // abstract class ka object cannot be instantiated

    //Abstraction + runTime polymorphism
    Bird *b1 = new Sparrow();
    Bird *b2 = new Eagle();

    birdActivity(b1);
    birdActivity(b2);

    //proper cleanUp via base pointer
    delete b1;
    delete b2;

    return 0;
}