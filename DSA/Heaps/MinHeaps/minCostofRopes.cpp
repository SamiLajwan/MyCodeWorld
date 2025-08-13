#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<long long ,vector <long long>, greater<long long>>pq;
        
        for(int i=0; i<arr.size(); i++){
            int val = arr[i];
            pq.push(val);
        }    
        
        long long cost =0;
        
        while(pq.size() != 1){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            
            long long sum = first + second;
            
            pq.push(sum);
            
            cost = cost + sum;
        }
        return cost;
    }
};

int main(){
    Solution s;

    vector<int> arr = {4,3,2,6};
    cout << s.minCost(arr) << endl; // Output: 29
    return 0;

}
