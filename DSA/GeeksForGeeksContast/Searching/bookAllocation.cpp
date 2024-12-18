//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isFeasible(vector<int>& arr, int n, int k, int maxPages) {
        int students = 1;
        int currentPages = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxPages) {
                return false; // A single book exceeds maxPages
            }
            if (currentPages + arr[i] > maxPages) {
                students++;
                currentPages = arr[i];
                if (students > k) return false; // Too many students required
            } else {
                currentPages += arr[i];
            }
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (n < k) return -1; // Not enough books for students
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isFeasible(arr, n, k, mid)) {
                result = mid;  // Update result to the current mid
                high = mid - 1; // Try for a better (smaller) solution
            } else {
                low = mid + 1; // Increase maxPages and try again
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends