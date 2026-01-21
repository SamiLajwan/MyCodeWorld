#include<bits/stdc++.h>
using namespace std;

vector<int> tobinary(int n){
    vector<int> ans;
    if(n == 0){
        ans.push_back(0);
        return ans;
    }
    while(n!=0){
        ans.push_back(n%2);
        n/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int zeroes(vector<int>&v){
    int count = 0;
    int i = 0;
    int j = v.size()-1;
    int k = 1;
    int maxi = 0;
    while(k<j){
        if(v[i] == 1 && v[j] == 1){
            if(v[k] == 0){
                count++;
                k++;
            }
            else{
                if(v[k] == 1){
                    count = 0;
                    k++;
                }
            }
        }
        maxi = max(count,maxi);
    }
    return maxi;
}

int main(){
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    vector<int> ans = tobinary(n);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    int finalAns = zeroes(ans);
    cout << "No. of Gaps: " << finalAns << endl;
    return 0;
}