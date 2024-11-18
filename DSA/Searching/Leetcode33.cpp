// Search in a rotated array after finding pivot index.

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

// Function to find the pivot index in a rotated sorted array
int getPivotIndex(vector<int>& arr) {
    int s = 0; // Start of the search range
    int n = arr.size(); // Size of the array
    int e = n - 1; // End of the search range
    int mid = s + (e - s) / 2; // Calculate the middle index

    // Perform binary search to find the pivot index
    while (s <= e) {
        // If start equals end, it means there's only one element left
        if (s == e) {
            // Single element is considered the pivot
            return s;
        }

        // If the middle element is greater than the next element, mid is the pivot
        if (mid + 1 < n && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        // Determine whether to search in the left or right part of the array
        if (arr[s] > arr[mid]) {
            // Pivot is in the left half
            e = mid - 1;
        } else {
            // Pivot is in the right half
            s = mid + 1;
        }

        // Update mid for the next iteration
        mid = s + (e - s) / 2;
    }

    // Return -1 if no pivot is found (edge case)
    return -1;
}

// Function to perform binary search on a given range in the array
int binarySearch(int s, int e, int target, vector<int>& arr) {
    int mid = s + (e - s) / 2; // Calculate the middle index
    while (s <= e) {
        // If the target is found, return its index
        if (arr[mid] == target) {
            return mid;
        }

        // If the target is greater, search in the right half
        if (target > arr[mid]) {
            s = mid + 1;
        } else {
            // Otherwise, search in the left half
            e = mid - 1;
        }

        // Update mid for the next iteration
        mid = s + (e - s) / 2;
    }

    // Return -1 if the target is not found
    return -1;
}

// Function to search for a target in a rotated sorted array
int search(vector<int>& nums, int target) {
    // Step 1: Find the pivot index
    int pivotIndex = getPivotIndex(nums);

    // Step 2: Define ranges for binary search based on the pivot
    // Line A: Range from the start to the pivot
    // Line B: Range from pivot + 1 to the end
    int n = nums.size();

    // Check if the target lies in the first range (from 0 to pivot)
    if (target >= nums[0] && target <= nums[pivotIndex]) {
        // Perform binary search in the first range
        return binarySearch(0, pivotIndex, target, nums);
    } else {
        // Otherwise, perform binary search in the second range
        return binarySearch(pivotIndex + 1, n - 1, target, nums);
    }
}

// Main function to test the search functionality
int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = search(nums, target);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
