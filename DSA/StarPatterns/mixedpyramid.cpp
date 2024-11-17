#include<iostream>
using namespace std;

void mixPyramids(int n) {
  // PART - 1
  for (int i = 0; i < n; i++) {
    // I. stars
    for (int j = 0; j < n - i; j++)
      cout << "*";

    // II. spaces
    for (int j = 0; j < 2 * i + 1; j++)
      cout << " ";

    // III. stars
    for (int j = 0; j < n - i; j++)
      cout << "*";
    cout << endl;
  }

  // PART - 2
  for (int i = 0; i < n; i++) {
    // I. stars
    for (int j = 0; j < i + 1; j++)
      cout << "*";

    // II. spaces
    for (int j = 0; j < 2 * (n - i) - 1; j++)
      cout << " ";

    // III. stars
    for (int j = 0; j < i + 1; j++)
      cout << "*";
    cout << endl;
  }
}

int main()
{
    int n;
    cin >> n;
    mixPyramids(n);
    return 0;

}