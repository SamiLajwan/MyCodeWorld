#include<iostream>
#include<cmath> // For abs function
using namespace std;

void findMissing(int *a, int n){
    for(int i = 0; i < n; i++){
        int index = abs(a[i]);
        if(index - 1 < n && a[index - 1] > 0){ // Ensure index is within bounds
            a[index - 1] *= -1;               // Mark as visited
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            cout << i + 1 << " "; // Print missing numbers
        }
    }
}

int main(){
    int n;
    int a[] = {1, 2, 3, 3, 3};  
    n = sizeof(a) / sizeof(int);

    findMissing(a, n);
    return 0;
}
