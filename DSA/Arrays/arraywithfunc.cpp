#include <iostream>
using namespace std;

void solve(int arr[], int size)
{
    arr[1] = 50; // Update the second element of the array
}

int main()
{
    int arr[] = {10, 20, 30}; // Initialize the array
    int size = 3; // Size of the array
    solve(arr, size); // Call the function to modify the array

    // Print the elements of the array
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " "; // Print each element followed by a space
    }
    cout << endl; // Print a newline after the array elements

    return 0; // Return 0 to indicate successful execution
}
