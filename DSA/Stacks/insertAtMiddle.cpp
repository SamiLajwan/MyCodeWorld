#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &s, int count){
    //base case
    if(count == 0){
        cout << s.top() << endl;
        return;
    }

    //1 case ham solve krneneg
    int topElement = s.top();
    s.pop();
    count--;

    printMiddle(s, count);

    s.push(topElement);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int count = s.size()/2;
    printMiddle(s, count);
    return 0;
}