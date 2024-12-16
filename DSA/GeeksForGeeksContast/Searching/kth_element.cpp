//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int n = a.size(), m = b.size();
        
        // Ensure the smaller array is a
        if (n > m) return kthElement(b, a, k);
        
        int low = max(0, k - m), high = min(k, n);
        
        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = k - cut1;
            
            int left1 = (cut1 > 0) ? a[cut1 - 1] : INT_MIN;
            int left2 = (cut2 > 0) ? b[cut2 - 1] : INT_MIN;
            int right1 = (cut1 < n) ? a[cut1] : INT_MAX;
            int right2 = (cut2 < m) ? b[cut2] : INT_MAX;
            
            if (left1 <= right2 && left2 <= right1) {
                return max(left1, left2);
            }
            if (left1 > right2) {
                high = cut1 - 1;
            } else {
                low = cut1 + 1;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends