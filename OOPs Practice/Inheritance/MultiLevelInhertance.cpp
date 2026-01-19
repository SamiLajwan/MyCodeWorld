#include<iostream>
using namespace std;

class Person {
public:
    void walk() {
        cout << "Person can walk" << endl;
    }
};

class Employee : public Person {
public:
    void work() {
        cout << "Employee works" << endl;
    }
};

class Manager : public Employee {
public:
    void manage() {
        cout << "Manager manages team" << endl;
    }
};

int main() {
    Manager m;
    m.walk();    // Person
    m.work();    // Employee
    m.manage();  // Manager
    return 0;
}
