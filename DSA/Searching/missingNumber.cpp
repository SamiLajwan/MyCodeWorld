#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int ansIndex = -1;
        int n = arr.size();
        int s= 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<=e){
            if(mid + 1 < n && arr[mid+1] - arr[mid] != 1){
                ansIndex = mid;
                return arr[mid] + 1;
            }
            if(mid - 1 >= 0 && arr[mid] - arr[mid-1] != 1){
                ansIndex = mid;
                return arr[mid] - 1;

            }
            if(arr[mid] - mid == 0){
                s = mid+1;
            }
            if(arr[mid] - mid != 0){
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        if(ansIndex == -1){
            return mid;
        }
        return -1;
    }
};
int main() {
    Solution solution;
    vector<int> arr = {0,1,2,3}; //input
    cout << "Missing number is: " << solution.missingNumber(arr) << endl;
    return 0;
}