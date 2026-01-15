#include<iostream>
using namespace std;

class Student{
    public: 
    // attributes
    int id;
    int age;
    string name;
    int nos;
    float gpa;

    //default constructor
    Student(){
        cout << "Default constructor Called." << endl;
    }

    //parameterized constructor
    Student(int _id, int _age, string _name, int _nos, float _gpa){
        id = _id;
        age = _age;
        name = _name;
        nos = _nos;
        gpa = _gpa;
    }

    //Behaior / Methods

    void study(){
        cout << name << "is Studying " << endl;
    }

    void sleep(){
        cout << name << "Is Sleeping" << endl;
    }

    void bunk(){
        cout << name << "Is Bunking" << endl;
    }
};

int main(){
    Student B;
    Student A(1, 23, "Sami", 6, 10.0);
    cout << A.name << " " << A.age << endl;

    return 0;
}