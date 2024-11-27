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

// Function to convert a string into uppercase
void convertIntoUpperCase(char arr[], int size) {
    int len = getlength(arr, size); // Corrected function call and parameter
    for (int i = 0; i < len; i++) {
        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A'; // Convert to uppercase
        }
        arr[i] = ch; // Update the character in the array
    }
}

int main() {
    char arr[100];
    cin >> arr; // Reads a single word
    convertIntoUpperCase(arr, 100);
    cout << arr << endl; // Output the modified string

    return 0;
}
