#include <iostream>
using namespace std;

void fullpyramid(int n) {
    for (int row = 0; row < n; row++) {
        // for spaces
        for (int col = 0; col < n - row - 1; col++)
            cout << " ";
        
        // for stars
        for (int col = 0; col < row + 1; col++)
            cout << "* ";

        // move the endl outside the star printing loop
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter value: " << endl;
    cin >> n;

    fullpyramid(n);
    return 0;
}
