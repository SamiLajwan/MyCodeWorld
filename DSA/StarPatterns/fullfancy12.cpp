#include<iostream>
using namespace std;

void fancy12(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * i + 1; j++) {
      // cout << "$";

      if (j % 2 == 0)
        cout << i + 1;
      else
        cout << "*";
    }
    cout << endl;
  }
}

void fullfancy12(int n) {
  fancy12(n);

 n--;
  // inverted ka logic
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * (n - i) - 1; j++) {
      // cout << "$";
      if (j % 2 == 0)
        cout << n - i;
      else
        cout << "*";
    }
    cout << endl;
  }
}

int main()
{
    int n;
    cout<<" ENter VAlue: ";
    cin >> n;
    fullfancy12(n);
    return 0;
}