#include <iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity) {
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int value) {
        if (top2 - top1 == 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top1++;
            arr[top1] = value;
        }
    }

    void push2(int value) {
        if (top2 - top1 == 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top2--;
            arr[top2] = value;
        }
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            top1--;
        }
    }

    void pop2() {
        if (top2 == size) {
            cout << "Stack Underflow" << endl;
        } else {
            top2++;
        }
    }

    void print() {
        cout << "Stack 1: ";
        for (int i = 0; i <= top1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Stack 2: ";
        for (int i = size - 1; i >= top2; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5);
    s.push1(10);
    s.print();
    s.push2(90);
    s.print();
    s.push2(80);
    s.print();
    s.pop1();
    s.print();
    s.push2(90);
    s.print();
    return 0;
}