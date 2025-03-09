#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, vector<int >&ans){
    stack<int> s;
    s.push(-1);

    for(int i=n-1; i>=0; i--){
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

    solve(arr,n, ans);

    reverse(ans.begin(), ans.end());

    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}