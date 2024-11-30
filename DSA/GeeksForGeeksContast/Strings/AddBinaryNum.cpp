//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        if (s1.length() < s2.length()) 
            swap(s1, s2);
        while (s2.length() < s1.length()) 
             s2 = '0' + s2;

        string result = "";
        int carry = 0;

        for (int i = s1.length() - 1; i >= 0; i--) {
            int bit1 = s1[i] - '0';
            int bit2 = s2[i] - '0';
    
            int sum = bit1 + bit2 + carry;
            result += (sum % 2) + '0';
            carry = sum / 2;
        }

        if (carry) result += '1';
        reverse(result.begin(), result.end());
    
        while (result.length() > 1 && result[0] == '0') 
            result.erase(0, 1);
    
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends