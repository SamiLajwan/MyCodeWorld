//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void computeLPS(const string &pattern, vector<int> &lps) {
        int m = pattern.size(), length = 0, i = 1;
        lps[0] = 0;
        while (i < m) {
            if (pattern[i] == pattern[length]) {
                lps[i++] = ++length;
            } else if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i++] = 0;
            }
        }
    }

    // Function to search for the pattern in the text
    vector<int> search(string pat, string txt) {
        int n = txt.size(), m = pat.size();
        vector<int> lps(m), result;
        computeLPS(pat, lps);
        int i = 0, j = 0;
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++, j++;
            }
            if (j == m) {
                result.push_back(i - j); // Match found
                j = lps[j - 1];
            } else if (i < n && txt[i] != pat[j]) {
                if (j != 0) j = lps[j - 1];
                else i++;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends