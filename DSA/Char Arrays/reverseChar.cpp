#include <iostream>
using namespace std;

// Function to calculate the length of the string
int getlength(char arr[], int size) {
    int count = 0;
    int index = 0;

    while (arr[index] != '\0') {
        // Count characters until null character is found
        count++;
        index++;
    }
    return count;
}

void reverseChar(char arr[], int size){
    int n = getlength(arr, size);

    int i=0;
    int j=n-1;

    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}


int main() {
    char arr[100];
    cin >> arr; // Reads a single word
    cout << "before Reversing: " << arr << endl;
    reverseChar(arr, 100);
    cout << "After Reversing: " << arr << endl; // Output the modified string

    return 0;
}
