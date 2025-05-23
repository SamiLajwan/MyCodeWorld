//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n=arr.size();
        int ind=-1;
        //break point dhundh kr lao 
        for(int i=n-2; i>=0; i--)
        {
            if(arr[i]<arr[i+1])
            {
                ind=i;
                break;
            }
        }
        //agar max permutation raha toh lowest permutation return krdenge 
        if(ind==-1)
        {
            reverse(arr.begin(),arr.end());
            return;
        }
        //swapping
        for(int i=n-1; i > ind ; i--)
        {
            if(arr[i]>arr[ind])
            {
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr.begin()+ ind+1,arr.end());
        return;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends