//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int minSum = INT_MAX, maxSum = INT_MIN;
        int s1=0, s2=0, TotalSum = 0;
        
        for(int i=0; i<arr.size(); i++){
            TotalSum += arr[i];
            s1 += arr[i];
            s2 += arr[i];
            if(s1 < 0){
                s1 = 0;
            }
            if(s2 > 0){
                s2 = 0;
            }
            
            maxSum = max(maxSum, s1);
            minSum = min(minSum, s2);
        }
        return max(maxSum, TotalSum - minSum);
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends