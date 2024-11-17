#include <iostream>

using namespace std;


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

int main() {
  int n;
  cout<< "enter value: " ;
  cin >> n;
  invertedFullPyramid(n);
  return 0;
}