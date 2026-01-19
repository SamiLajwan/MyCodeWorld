#include<iostream>
using namespace std;

class Employee {
public:
    void salary() {
        cout << "Salary credited" << endl;
    }
};

class Developer : public Employee {
public:
    void code() {
        cout << "Developer is coding" << endl;
    }
};

class Tester : public Employee {
public:
    void test() {
        cout << "Tester is testing" << endl;
    }
};

int main() {
    Developer d;
    d.salary();
    d.code();

    Tester t;
    t.salary();
    t.test();

    return 0;
}
