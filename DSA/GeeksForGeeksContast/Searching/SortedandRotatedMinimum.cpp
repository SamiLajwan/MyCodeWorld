//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;
        if (arr[s] <= arr[e]) {
            return arr[s];
        }
        while (s < e) {
            int mid = s + (e - s)/2;
            if (arr[mid] > arr[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return arr[s];
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends