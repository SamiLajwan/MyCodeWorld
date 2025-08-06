#include<iostream>
#include<queue>
using namespace std;

class Solution{
    public:
    int findKthLargest(vector<int> &nums, int k){
        //max heap
        priority_queue<int> pq;
        
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        int ans = -1;
        while(k!=0){

            ans=pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }

};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k;
    cout << "Enter K: ";
    cin >> k;
    

    int finalAns = s.findKthLargest(nums, k);
    cout << "Kth Largest Element: " << finalAns << endl;

    return 0;
}