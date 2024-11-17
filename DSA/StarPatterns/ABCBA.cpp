#include<iostream>
using namespace std;

void ABCBA(int n) {
  for (int i = 0; i < n; i++) {
    char ch = 'A'; // ASCII 65 init.
    for (int j = 0; j < i + 1; j++) {
      cout << ch;
      ch++;
    }
    
    ch--;
    
    while (ch > 'A') {
      ch--;
      cout << ch;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cout<<" Enter Value: ";

  cin >> n;

  ABCBA(n);
  return 0;
}

