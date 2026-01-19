#include<iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teaching students" << endl;
    }
};

class Researcher {
public:
    void research() {
        cout << "Doing research" << endl;
    }
};

class Professor : public Teacher, public Researcher {
public:
    void guide() {
        cout << "Guiding students" << endl;
    }
};

int main() {
    Professor p;
    p.teach();
    p.research();
    p.guide();
    return 0;
}
