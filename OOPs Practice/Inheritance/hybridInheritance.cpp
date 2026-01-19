#include<iostream>
using namespace std;

class Person {
public:
    void identity() {
        cout << "I am a person" << endl;
    }
};

class Employee : public Person {
public:
    void work() {
        cout << "Employee works" << endl;
    }
};

class Developer : public Employee {
public:
    void code() {
        cout << "Developer codes" << endl;
    }
};

class Manager : public Employee {
public:
    void manage() {
        cout << "Manager manages" << endl;
    }
};

int main() {
    Developer d;
    d.identity();
    d.work();
    d.code();

    Manager m;
    m.identity();
    m.work();
    m.manage();

    return 0;
}
