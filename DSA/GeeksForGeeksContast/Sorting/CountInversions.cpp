//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
   int inversionCount(vector<int>& arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }

private:
    int merge(vector<int>& arr, int left, int mid, int right) {
        int inv_count = 0;
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> L(n1), R(n2);

        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
                inv_count += n1 - i;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }

        return inv_count;
    }

    int mergeSort(vector<int>& arr, int left, int right) {
        int inv_count = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;

            inv_count += mergeSort(arr, left, mid);
            inv_count += mergeSort(arr, mid + 1, right);

            inv_count += merge(arr, left, mid, right);
        }
        return inv_count;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends