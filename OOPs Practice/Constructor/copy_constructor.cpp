#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    Student(int r) {
        roll = r;
        cout << "Constructor called" << endl;
    }


    // Copy Constructor
    Student(Student &s) {
        roll = s.roll;
    }
};

int main() {
    Student s1(101);      // parameterized constructor
    Student s2 = s1;      // copy constructor

    cout << s2.roll << endl;
    return 0;
}
