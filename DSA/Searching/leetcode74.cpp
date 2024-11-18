#include <iostream>
#include <vector>
using namespace std;

// Function to search for a target in a 2D matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();          // Number of rows
    int columns = matrix[0].size();    // Number of columns
    int n = rows * columns;            // Total number of elements in the matrix

    int s = 0; // Start index for binary search
    int e = n - 1; // End index for binary search
    int mid = s + (e - s) / 2;

    // Binary search on the matrix
    while (s <= e) {
        int rowIndex = mid / columns;   // Calculate row index
        int colIndex = mid % columns;  // Calculate column index

        if (matrix[rowIndex][colIndex] == target) {
            return true; // Target found
        }

        if (target > matrix[rowIndex][colIndex]) {
            // Search in the right half
            s = mid + 1;
        } else {
            // Search in the left half
            e = mid - 1;
        }

        // Update mid for the next iteration
        mid = s + (e - s) / 2;
    }

    return false; // Target not found
}

int main() {
    // Corrected 2D matrix input
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 11; // Target to search for

    // Call the search function
    bool ans = searchMatrix(matrix, target);

    // Output result
    if (ans) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
