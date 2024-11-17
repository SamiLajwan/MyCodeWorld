#include <iostream>

using namespace std;

void fullPyramid(int n) {
  for (int i = 0; i < n; i++) {
    // 1. spaces
    for (int j = 0; j < n - i - 1; j++)
      cout << " ";

    // 2. stars
    for (int j = 0; j < i + 1; j++)
      cout << "* ";
    cout << endl;
  }
}

void invertedFullPyramid(int n) {
  // outer loop
  for (int i = 0; i < n; i++) {
    // I spaces
    for (int j = 0; j < i; j++)
      cout << " ";

    // II stars
    for (int j = 0; j < n - i; j++)
      cout << "* ";

    cout << endl;
  }
}

void diamond(int n) {
  fullPyramid(n);
  invertedFullPyramid(n);
}

int main()
{
    int n;
    cout<< "enTER VALUE :";
    cin >> n;
    diamond(n);
    return 0;
}