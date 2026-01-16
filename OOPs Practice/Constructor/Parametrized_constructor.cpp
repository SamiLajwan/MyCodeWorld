#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor called.." << endl;
    }

    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student s1(101, "Sami");
    s1.display();
    Student s2(102, "Ali");
    s2.display();

    return 0;
}
