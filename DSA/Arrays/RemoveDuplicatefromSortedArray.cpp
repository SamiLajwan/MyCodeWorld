#include<iostream>
#include<vector>

using namespace std;

int removeDuplicate(vector<int>&nums){
    int i=1, j=0;
    while(i<=nums.size()){
        if(nums[i]==nums[j]){
            i++;
        }
        else{
            nums[++j] = nums[i++];
        }
    }
    return j;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4,5};
    int ans = removeDuplicate(nums);

    cout << "After removing duplicates, the new length is: " << ans << endl;
    cout << "Modified array: ";
    for (int i = 0; i < ans; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}