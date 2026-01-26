// #include <iostream>
// using namespace std;

// class Student {
// public:
//     static int totalStudents;  // static data member
// };

// int Student::totalStudents = 0; // definition

// int main() {
//     Student s1;
//     Student s2;

//     Student::totalStudents = 2;

//     cout << Student::totalStudents;
//     return 0;
// }


//Static data member with constructor
#include <iostream>
using namespace std;

class Car {
public:
    static int count;

    Car() {
        count++;
    }
};

int Car::count = 0;

int main() {
    Car c1;
    Car c2;
    Car c3;

    cout << Car::count;
    return 0;
}

