#include <iostream>

using namespace std;


void invertedhollowPyramid(int n) {
  // outer loop
  for (int i = 0; i < n; i++) {
    // I spaces
    for (int j = 0; j < i; j++)
      cout << " ";

    // II stars
    for (int j = 0; j < n - i; j++)
    if(i==0 || i == n - 1 || j == 0 || j == n -i -1)
      cout << "* ";
    else
    cout << "  ";

    cout << endl;
  }
}

int main() {
  int n;
  cout<< "enter value: " ;
  cin >> n;
  invertedhollowPyramid(n);
  return 0;
}