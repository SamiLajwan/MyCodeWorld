#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the integer square root of a given number
int sqrt(int x) {
    int s = 0; // Start of the search range
    int e = x; // End of the search range
    int mid = s + (e - s) / 2; // Middle point
    int ans = -1; // Variable to store the result

    // Binary search to find the square root
    while (s <= e) {
        if (mid * mid == x) {
            return mid; // Exact square root found
        }

        if (mid * mid < x) {
            // Store the compute answer and move to the right
            ans = mid;
            s = mid + 1;
        } else {
            // Move to the left
            e = mid - 1;
        }

        // Update mid for each iteration
        mid = s + (e - s) / 2;
    }

    return ans; // Return the largest integer less than or equal to the square root
}

int main() {
    int x = 8; // Test input: Single integer
    
    int root = sqrt(x); // Calculate the square root

    cout << "Square root: " << root << endl; // Output the result
    return 0;
}
