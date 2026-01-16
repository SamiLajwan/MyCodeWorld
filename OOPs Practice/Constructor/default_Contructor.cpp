#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Default Constructor
    Student() {
        roll = 1;
        name = "SAMII";
        cout << "Default Constructor Called.." << endl;
    }

    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student s1;   // Constructor automatically called
    s1.display();
    return 0;
}
