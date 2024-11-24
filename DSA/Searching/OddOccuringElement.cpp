// Find the Odd Occuring ELement in a Array-->

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int s = 0;
        int n = arr.size();
        int e = n - 1;
        int mid;

        while (s < e) {
            mid = s + (e - s) / 2;

            // Check if mid is part of a pair
            if (mid % 2 == 0) {
                if (arr[mid] == arr[mid + 1]) {
                    // Move to the right part
                    s = mid + 2;
                } else {
                    // Move to the left part
                    e = mid;
                }
            } else {
                if (arr[mid] == arr[mid - 1]) {
                    // Move to the right part
                    s = mid + 1;
                } else {
                    // Move to the left part
                    e = mid - 1;
                }
            }
        }

        // When s == e, we've found the single non-duplicate element
        return arr[s];
    }
};

int main() {
    Solution sol;
    vector<int> arr = { 2, 2, 3, 3, 4, 4, 8};

    int ans = sol.singleNonDuplicate(arr);

    cout << "Single Non-Duplicate Element: " << ans << endl;

    return 0;
}
