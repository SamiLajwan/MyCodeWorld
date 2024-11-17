#include<iostream>
using namespace std;

void hollowPyramid(int n) {
  // leveraging full pyramid code
  for (int i = 0; i < n; i++) {
    // 1. spaces
    for (int j = 0; j < n - i - 1; j++)
      cout << " ";

    // 2. stars
    for (int j = 0; j < i + 1; j++) {
      if (i == 0 /*|| i == n - 1 */ || j == 0 || j == i + 1 - 1)
        cout << "* ";
      else
        cout << "  ";
    }

    cout << endl;
  }
}

void invertedHollowPyramid(int n) {
  // outer loop
  for (int i = 0; i < n; i++) {
    // I spaces
    for (int j = 0; j < i; j++)
      cout << " ";

    // II stars
    for (int j = 0; j < n - i; j++) {
      if (/*i == 0 ||*/ i == n - 1 || j == 0 || j == n - i - 1)
        cout << "* ";
      else
        cout << "  ";
    }

    cout << endl;
  }
}

void hollowDiamond(int n) {
  hollowPyramid(n);
  invertedHollowPyramid(n);
}

int main (){
    int n;
    cout << " Enter Value: ";
    cin >> n;
    hollowDiamond(n);
    return 0;
}