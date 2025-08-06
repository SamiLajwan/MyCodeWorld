#include<iostream>
#include<queue>
using namespace std;

class Solution{
    public:
    int findKthLargest(vector<int> &nums, int k){
        //min heap
        priority_queue<int, vector<int>, greater<int>>pq;
        
        //initial state maintain->insert k elemnts
        for (int i = 0; i < k; i++)
        {
            pq.push(nums[i]);
        }
        //process remaining element , ham chahte hai
        //k end me heap me k largest elemtns ko
        //taaki top me kth largest ele mil jaye 
        //k large rkhne k lie we will make sure
        //k ham bs large element hi insert kare

        for(int i=k; i<nums.size();i++){
            int element = nums[i];
            if(element > pq.top()){
                pq.pop();
                pq.push(element);
            }
        }
        return pq.top();
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