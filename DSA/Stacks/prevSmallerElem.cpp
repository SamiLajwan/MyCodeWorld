#include<bits/stdc++.h>
using namespace std;

void prevSmallerElement(int arr[], int n, vector<int >&ans){
    stack<int> s;
    s.push(-1);

    for(int i=0; i<n; i++){
        int element = arr[i];
        while(s.top() >= element){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(element);
    }
}

int main(){
    int arr[] = {8,4,6,2,3};
    int n=5;

    vector<int>ans;

    prevSmallerElement(arr,n, ans);

    // reverse(ans.begin(), ans.end());

    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}