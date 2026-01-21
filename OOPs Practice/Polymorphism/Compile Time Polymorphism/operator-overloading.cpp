/*

#include <iostream>
using namespace std;

class Box {
public:
    int weight;

    Box(int w): weight(w){} // using initializing list

    Box operator + (Box b) {
        Box temp(0);
        temp.weight = weight + b.weight;
        return temp;
    }
};

int main() {
    Box b1(10);
    Box b2(20);

    Box b3 = b1 + b2;   // b1.operator+(b2)

    cout << b3.weight;
}
*/

//example 2-->
// add two complex numbers using operator overloading
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    bool operator==(const Complex &c){
        return (real == c.real) && (imag == c.imag);
    }

    void print() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5);
    Complex c2(4, 5);

    Complex c3 = c1 + c2;
    cout << (c1 == c2) << endl;
    c3.print();
}

